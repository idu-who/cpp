#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <functional>
#include "file_handler.h"
#include "validation.h"

std::string accounts_file = "./db_files/accounts";
std::string transactions_file = "./db_files/transactions";

std::tuple<unsigned short int, std::string, std::string, std::string> splitAccountRecord(std::string record)
{
    // split a record of the account table into fields
    auto length{record.length()};
    unsigned short int id;
    std::string username, password, name;

    short int comma_count{0};
    short int next_start_index{0};

    // iterate through characters of the record
    for (short int index{0}; index < length; index++)
    {
        // if a , is found then store field's data in its variable
        if (record[index] == ',')
        {
            comma_count++;
            std::string field_data = record.substr(next_start_index, index - next_start_index);
            switch (comma_count)
            {
            case 1:
                id = std::stoi(field_data);
                break;
            case 2:
                username = field_data;
                break;
            case 3:
                password = field_data;
                break;
            }
            next_start_index = index + 1;
        }
        // edge case for last field
        else if (index == length - 1)
        {
            name = record.substr(next_start_index, length - next_start_index);
        }
    }

    return {id, username, password, name};
}

std::tuple<unsigned short int, unsigned short int, std::string, std::string, int, int> splitTransactionRecord(std::string);

unsigned short int getNextId(std::string file_name)
{
    // check the last id used in all records to get the next id
    std::istringstream records{readLines(file_name)};
    std::string record;
    unsigned short int last_id{0};

    std::getline(records, record); // getting rid of table header

    // TODO: improve loop code, try templates and type erasure
    while (std::getline(records, record))
    {
        if (file_name == accounts_file)
        {
            auto fields {splitAccountRecord(record)};
            if (std::get<0>(fields) > last_id)
            {
                last_id = std::get<0>(fields);
            }
        }
        else if (file_name == transactions_file)
        {
            auto fields {splitTransactionRecord(record)};
            if (std::get<0>(fields) > last_id)
            {
                last_id = std::get<0>(fields);
            }
        }
    }

    return last_id+1;
}

// bool addUser(std::string username, std::string password, std::string name)
// {

// }

int main()
{
    std::cout << getNextId(accounts_file) << std::endl;
    return 0;
}

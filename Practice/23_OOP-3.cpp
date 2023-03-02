#include <iostream>
#include <string>

std::string str_tolower(std::string str)
{
    for (char &c : str)
    {
        c = std::tolower(c);
    }
    return str;
}

class Polygon
{
    std::string name;
    int no_sides, no_vertices;

public:
    Polygon(int no_sides, int no_vertices) : no_sides(no_sides), no_vertices(no_vertices) {}

    void set_name(std::string name_input)
    {
        name = name_input;
    }

    std::string get_name()
    {
        return str_tolower(name);
    }

    void print_info()
    {
        std::cout << "name: " << get_name() << std::endl;
        std::cout << "no of sides: " << no_sides << std::endl;
        std::cout << "no of vertices: " << no_vertices << std::endl;
    }
};

int main()
{
    Polygon p1(3, 3);
    p1.set_name("TriAnGlE");
    p1.print_info();
    return 0;
}

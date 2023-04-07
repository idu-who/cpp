#include <iostream>
#include <string>

std::string strToLower(std::string str) {
    for (char &c : str) {
        c = std::tolower(c);
    }
    return str;
}

class Polygon {
    std::string name;
    int no_sides, no_vertices;

   public:
    Polygon(int no_sides, int no_vertices) : no_sides(no_sides), no_vertices(no_vertices) {}

    void setName(std::string name_input) {
        name = name_input;
    }

    std::string getName() {
        return strToLower(name);
    }

    void printInfo() {
        std::cout << "name: " << getName() << std::endl;
        std::cout << "no of sides: " << no_sides << std::endl;
        std::cout << "no of vertices: " << no_vertices << std::endl;
    }
};

int main() {
    Polygon p1(3, 3);
    p1.setName("TriAnGlE");
    p1.printInfo();
    return 0;
}

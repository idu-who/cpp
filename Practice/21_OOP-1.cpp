#include <iostream>

int main()
{
    // Syntax for class definition ends in a semi-colon to allow inline object instanciation
    class Polygon
    {
    public:
        int no_sides, no_vertices;
    } p1, p2;

    std::cout << "class size: " << sizeof(Polygon) << std::endl;
    std::cout << "object size: " << sizeof(p1) << std::endl;

    // accessing attributes from object using dot-operator
    p1.no_sides = 3;
    p1.no_vertices = 3;

    std::cout << "no of sides: " << p1.no_sides << std::endl;
    std::cout << "no of vertices: " << p1.no_vertices << std::endl;

    // each instance is allocated separate memory
    std::cout << "p1 address: " << &p1 << std::endl;
    std::cout << "p2 address: " << &p2 << std::endl;

    return 0;
}

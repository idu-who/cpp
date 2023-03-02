#include <iostream>

class Polygon
{
    // attributes and methods are private by default
    // private members can't be accessed outside the class
    int no_sides, no_vertices;

public:
    // Parameterized Constructor 1
    // Polygon(int no_sides, int no_vertices) : no_sides(no_sides), no_vertices(no_vertices){}

    // Parameterized Constructor 2
    // Polygon(int no_sides, int no_vertices)
    // {
    //     Polygon::no_sides = no_sides;
    //     Polygon::no_vertices = no_vertices;
    // }

    // Parameterized Constructor 3
    Polygon(int no_sides_input, int no_vertices_input)
    {
        no_sides = no_sides_input;
        no_vertices = no_vertices_input;
    }

    void print_info()
    {
        std::cout << "no of sides: " << no_sides << std::endl;
        std::cout << "no of vertices: " << no_vertices << std::endl;
    }
};

int main()
{
    Polygon p1(4, 4);
    p1.print_info();

    return 0;
}

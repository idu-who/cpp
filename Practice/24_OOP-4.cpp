#include <iostream>
#include <array>

class Polygon
{
    int no_sides, no_vertices;

public:
    Polygon(int no_sides, int no_vertices) : no_sides(no_sides), no_vertices(no_vertices) {}

    void print_info()
    {
        std::cout << "no of sides: " << no_sides << std::endl;
        std::cout << "no of vertices: " << no_vertices << std::endl;
    }
};

class Quadrilateral : public Polygon
{
    std::array<std::array<int, 2>, 4> vertices;

public:
    Quadrilateral(std::array<std::array<int, 2>, 4> vertices) : Polygon(4, 4), vertices(vertices) {}

    void print_info()
    {
        Polygon::print_info();
        std::cout << "vertices: {";
        for (std::array<int, 2> vertice : vertices)
        {
            std::cout << "(" << vertice[0] << ", " << vertice[1] << "), ";
        }
        std::cout << "\b\b}" << std::endl;
    }
};

int main()
{
    std::array<std::array<int, 2>, 4> vertices{{{0, 0}, {1, 0}, {1, 1}, {0, 1}}};
    Quadrilateral q1(vertices);
    q1.print_info();

    return 0;
}

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 6, b = 4;

    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    char c = 'c', d = 'd';

    std::cout << c << " " << d << std::endl;
    swap(c, d);
    std::cout << c << " " << d << std::endl;

    return 0;
}

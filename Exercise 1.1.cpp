#include <iostream>

int main()
{
    int x, y, sum, product;

    std::cout << "Enter x and y: ";
    std::cin >> x >> y;

    sum = x + y;
    product = x * y;

    std::cout << x << " + " << y << " = " << sum << std::endl;
    std::cout << x << " * " << y << " = " << product << std::endl;

    return 0;
}

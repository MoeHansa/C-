#include <iostream>

int main()
{
    int quarters, dimes, nickles, total;

    std::cout << "Enter quarters: ";
    std::cin >> quarters;

    std::cout << "Enter nickles: ";
    std::cin >> nickles;

    std::cout << "Enter dimes: ";
    std::cin >> dimes;

    std::cout << "\n" << quarters << " quarters + " << nickles << " nickles + " << dimes << " dimes = ";

    quarters *= 25;
    dimes *= 10;
    nickles *= 5;

    total = quarters + dimes + nickles;

    std::cout << total << " cents\n";

}

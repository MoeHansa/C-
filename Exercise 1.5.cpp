#include <iostream>

int main() {
    // Declare variables
    char inputChar;

    // Prompt user for input
    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    // Output the large block letter "C"
    std::cout << "      " << inputChar << " " << inputChar << " " << inputChar << std::endl;
    std::cout << "   " << inputChar << "         " << inputChar << std::endl;
    std::cout << " " << inputChar << std::endl;
    std::cout << " " << inputChar << std::endl;
    std::cout << " " << inputChar << std::endl;
    std::cout << " " << inputChar << std::endl;
    std::cout << " " << inputChar << std::endl;
    std::cout << "   " << inputChar << "         " << inputChar << std::endl;
    std::cout << "      " << inputChar << " " << inputChar << " " << inputChar << std::endl;

    return 0;
}


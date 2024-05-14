#include <iostream>
#include <cmath>

int main() {
    char repeat;

    do {
        int n;
        double pi = 0.0;

        std::cout << "Enter the number of terms (n) for the approximation of pi: ";
        std::cin >> n;

        for (int i = 0; i <= n; ++i) {
            pi += pow(-1, i) / (2.0 * i + 1);
        }

        pi *= 4;

        std::cout << "Approximate value of pi with " << n << " terms: " << pi << std::endl;

        std::cout << "Do you want to calculate pi with another value of n? (Y/N): ";
        std::cin >> repeat;

    } while (toupper(repeat) == 'Y');

    std::cout << "Program ended.\n";

    return 0;
}


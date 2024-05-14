#include <iostream>
#include <string>

int main()
{
    int edocCaught(0), edocCandy(0), margorp(0), xp, edocTransfer(0), edocEvolve(0), totalXP(0);
    char ans, playAgain;

    std::cout << "Enter how many Edocs you have caught: ";
    std::cin >> edocCaught;
    std::cout << "Enter how many Edoc Candies are in your possession: ";
    std::cin >> edocCandy;

    do {
        xp = 0;

        std::cout << "\nEnter (E) to evolve your candies OR (T) to transfer your Edocs: ";
        std::cin >> ans;
        ans = toupper(ans);

        if (ans == 'T' && edocCaught > 0) {
            std::cout << "How many Edocs do you want to transfer: ";
            std::cin >> edocTransfer;

            std::cout << "\nTransfer " << edocTransfer << " Edocs and "
                      << margorp << " Margorp resulting in:\n";
            edocCandy += edocTransfer;
            edocCandy += margorp;
            edocCaught -= edocTransfer;
            margorp = 0;
        }

        if (ans == 'E' && edocCaught >= 1) {
            std::cout << "How many Edocs do you want to use to evolve into Margorps: ";
            std::cin >> edocEvolve;

            std::cout << "Evolve " << edocEvolve << " Edocs to get ";
            margorp = edocEvolve;
            edocCandy = (edocCandy - (edocEvolve * 12)) + edocEvolve;
            edocCaught -= edocEvolve;
            xp = 500 * edocEvolve;

            std::cout << xp << " experience points and resulting in:\n";
        }

        totalXP += xp;

        std::cout << "\nCurrent Status:\n";
        std::cout << edocCandy << " Candy, " << edocCaught << " Edocs, and " << margorp << " Margorp\n\n";

        std::cout << "Do you want to Evolve or Transfer again? (Y/N): ";
        std::cin >> playAgain;
        playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    std::cout << "\nTotal experience points = " << totalXP << std::endl;

    return 0;
}

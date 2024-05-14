#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

int main()
{
    using namespace std;

    ofstream fout;
    ifstream fin;

    fout.open("output.txt");
    fin.open("input.txt");

    char next = 'a'; // declare a char variable
    fin.get(next); // read one character from the input file and store it in next
    while (next != ' ') // while the character is not a blank
    {
        fout.put(next); // write the character to the output file
        fin.get(next); // read the next character from the input file and store it in next
    }
    fin.putback(next); // put the blank character back into the input file




    return 0;

}









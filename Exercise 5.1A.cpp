#include <iostream>
#include <cassert>

void getInput(int &a1, int &b1, int &c1)
{
    using namespace std;

    cout << "Enter 3 integers: ";
    cin >> a1 >> b1 >> c1;
}

// Updated swapValue to void, as it's not returning anything
void swapValue(int &a3, int &b3)
{
    int temp = a3;
    a3 = b3;
    b3 = temp;
}

void largestToSmallest(int &a, int &b, int &c)
{
    using namespace std;

    // Swap values if a is not greater than b
    if ((b > a) && (b > c))
        swapValue(a, b);
    if ((c > a) && (c > b))
        swapValue(a, c);
    if ((c < a) && (c > b))
        swapValue(b, c);

    // Output the numbers from largest to smallest
    cout << "\nNumbers from largest to smallest are: " << a << " " << b << " " << c << endl;
}

void output(int a2, int b2, int c2)
{
    // Call largestToSmallest to handle the logic and output
    largestToSmallest(a2, b2, c2);
}


int main()
{
    using namespace std;

    int x, y, z;

    getInput(x, y, z);

    // No need to call largestToSmallest here; it will be called in output function
    output(x, y, z);

    return 0;
}










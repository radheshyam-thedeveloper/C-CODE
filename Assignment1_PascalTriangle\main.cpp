#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int s = 0; s < rows - i - 1; s++)
            cout << " ";

        for(int j = 0; j <= i; j++)
        {
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }

        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int gcd(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a == 0)
        {
            return b;
        }
        if (b == 0)
        {
            return a;
        }
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
// Write a program to find factorial of
// a given number
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << fact(n) << endl;
}
// Display the pascal triangle..
/*  1
    1  1
    1  2  1
    1  3  3  1
    1  4  6  4  1
    1  5  10 10 5  1      */
#include <iostream>
using namespace std;
int fact(int x)
{
    if ((x == 0) || (x == 1))
    {
        return 1;
    }
    else
        return (x * fact(x - 1));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int a = fact(i) / (fact(i - j) * fact(j));
            cout << a << " ";
        }
        cout << endl;
    }
}
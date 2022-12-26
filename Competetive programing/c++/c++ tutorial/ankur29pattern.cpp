/*        *
         **
        ***
       ****
      *****   Format of printing stars  */
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((j) <= (a - i))
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}
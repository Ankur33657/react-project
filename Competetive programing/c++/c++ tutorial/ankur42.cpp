// Checking the presence of element in matrix.
// Elements are shorted in acending order in rows and column.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    cout << "Enter the serch element" << endl;
    cin >> n;
    bool flag = false;
    int r = 0, c = 4; // here we defined shorted element other wise c = n-1...
      int ma[r][c];
    while (r < 5 && c >= 0)
    {
        if (ma[r][c] == n)
        {
            flag = true;
        }
        ma[r][c] > n ? c-- : r++;
    }
    if (flag==true)
    {
        cout << "Found element" << endl;
    }
    else
        cout << "Not found" << endl;
}
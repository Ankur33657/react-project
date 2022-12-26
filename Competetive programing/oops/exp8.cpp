// Making simple and scientific calculator with help of inherent class..
#include <iostream>
#include <cmath>
using namespace std;
class simple
{
    int a, b;

public:
    void get_data1(int x, int y)
    {
        a = x;
        b = y;
    }
    void addition(void)
    {
        cout << "Addition = " << a + b << endl;
    }
    void subtraction(void)
    {
        cout << "subtraction = " << a - b << endl;
    }
    void multiplication(void)
    {
        cout << "Multiplication = " << a * b << endl;
    }
    void divide(void)
    {
        cout << "Divide = " << (float)a / b << endl;
    }
    void display_simple()
    {
        cout << "Inside simple calculator:" << endl;
        addition();
        subtraction();
        multiplication();
        divide();
    }
};
class scientific
{
    int q;

public:
    void set_data(float x)
    {
        q = x;
    }
    void get_data()
    {
        cout << "Inside scientific calculator:" << endl;
        cout << "Logrithmic = " << (float)log(q) << endl;
        cout << "cosine = " << (float)cos(q) << endl;
        cout << "sin = " << (float)sin(q) << endl;
        cout << "exponential = " << (float)exp(q) << endl;
    }
};
class hybrid : public simple, public scientific
{
public:
    void over_display(void)
    {
        cout << "Inside hybrid calculator:" << endl;
        cout << "This is hybrid mode" << endl;
        display_simple();
        get_data();
    }
};
int main()
{
    int a, b;
    float c;
    cout << "Enter value of 'a' and 'b' for simple calculation: " << endl;
    cin >> a >> b;
    cout << "Enter float value for scientific calculation:" << endl;
    cin >> c;
    hybrid h1;
    h1.get_data1(a, b);
    h1.display_simple();
    h1.set_data(c);
    h1.get_data();
    h1.over_display();
}
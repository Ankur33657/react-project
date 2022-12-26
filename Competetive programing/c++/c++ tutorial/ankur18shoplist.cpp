/* This programe managing the product list and their prices of two shop.
Also it explain the function of the product enter by the user*/
#include <iostream>
using namespace std;
class shop
{
    int product_Id[100];
    int price[100];
    int counter;

public:
    void Number(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter product Id of " << counter + 1 << " st product" << endl;
    cin >> product_Id[counter];
    cout << "Enter the price of the product" << endl;
    cin >> price[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Id of the product is" << product_Id[i] << " and price" << price[i] << endl;
    }
}
int main()
{
    cout << "Renu tabela" << endl;
    shop Renu;
    Renu.Number();
    for (int i = 0; i < 5; i++)
    {
        Renu.setprice();
    }
    Renu.displayprice();
    cout << "Neha chatt bhandar" << endl;
    shop Neha;
    Neha.Number();
    for (int i = 0; i < 5; i++)
    {
        Neha.setprice();
    }
    Neha.displayprice();
    
}
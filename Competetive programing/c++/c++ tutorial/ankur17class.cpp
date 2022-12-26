// This programe deals with the basic concept of class in object oriented programing
//Basically its deal with user name,company name and Id , its phone no., email id ..etc
#include <iostream>
using namespace std;
class Employee
{
public:
    string Name;
    int Id;
    string Address;
    string Email;

    void Intro(void)
    {
        cout << "Employee Name is" << Name << endl;
        cout << "Employee Id is" << Id << endl;
        cout << "Employee Phone_No is" << Address << endl;
        cout << "Employee Email is" << Email << endl;
    }
    Employee(string name, int id, string address, string email)
    {
        Name = name;
        Id = id;
        Address = address;
        Email = email;
    }
};
int main()
{
    Employee e1 = Employee("Ankur Singh", 336, "Ranchi", "atrianum22@gmail.com");
    e1.Intro();
    Employee e2 = Employee("Abhinav Thakur", 194, "Nawada", "ThakurAbhi194@gmail.com");
    e2.Intro();
}

/*Write a program by creating an 'Employee' class having the following functions and print the
 final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day 
     is more than 6 hours..
In addition 
use of inheritance..     */

#include <iostream>
#include<string.h>
using namespace std;
class Employee{
string Name;    
int Salary;
int Work_hour;
public:
void getInfo(string name , int working_hrs,int salary){
    Name = name;
    Salary = salary;
    Work_hour = working_hrs;
}
void Addsal(void){
    if(Salary<500){
        Salary +=10;
    cout<<"After Addsal() Salary = "<<Salary<<endl;
    }
}
void Addwork(void){
    if(Work_hour>6){
        Salary +=5;
    cout<<"After Addwork() Salary = "<<Salary<<endl;
    }
}
void Display(){
Addsal();
Addwork();
}

};
int main(){
Employee e1;
e1.getInfo("Ankur",7,680);
e1.Display();
}     

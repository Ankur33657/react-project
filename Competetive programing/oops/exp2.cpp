/* This is for static data type 
  it is used for store the value same for all object ofg class 
    as long as the programe runs.
    example- count no.of employee in school where objects were 
    teacher ,guard,sweeper..etc
    static function used to acess the static variable only 
    static function is called without using the name of object
    Note--> scope resolution is need after declear the static var.. */

#include <iostream>
using namespace std;
class Management
{
    static int numb;
    int numteacher;
    int numgaurd;
    int numstaff;
    int gate_no;
    string subject[100];
    int salaryteacher[100];
     int salarygaurd[100];
      int salarystaff[100];
    string work[100];

public:
    void teacher(void)
    {
        cout << "Enter the no. of teacher " << endl;
        cin >> numteacher;
        for (int i = 0; i < numteacher; i++)
        {
            cout << "Speclised subject" << endl;
            cin >> subject[i];
            cout << "Salary" << endl;
            cin >> salaryteacher[i];
          
        }
    }
    void display_teacher(void)
    {
        for (int i = 0; i < numteacher; i++)
        {
            cout << "This is " << numb << " member of the school" << endl;
           cout<<"The teacher with speclist subject "<<subject[i]<<" got salary "<<salaryteacher[i]<<endl;
           numb++;
        }
    }
    void guard(void)
    {
        cout << "Enter the number of guard" << endl;
        cin >> numgaurd;
        for (int i = 0; i < numgaurd; i++)
        {
            cout << "Enter the gate no. of duty" << endl;
            cin >> gate_no;
            cout << "salary got" << endl;
            cin >> salarygaurd[i];
        }
    }
    void display_guard(void)
    {
        for (int i = 0; i < numgaurd; i++)
        {
            cout << "This is " << numb << " member of school" << endl;
            cout<<"The guard at gate no "<<gate_no<<" got salary "<<salarygaurd[i]<<endl;
            numb++;
        }
    }
    void other_staff(void)
    {
        cout << "Enter the no. of other staffs " << endl;
        cin >> numstaff;
        for (int i = 0; i < numstaff; i++)
        {
            cout << "Emter the work" << endl;
            cin >> work[i];
            cout << "salary got" << endl;
            cin >> salarystaff[i];
        }
    }
    void display_otherstaff(void)
    {
        for (int i = 0; i < numstaff; i++)
        {
            cout << "This is " << numb << " member of school" << endl;
           cout<<" The staff whose work is "<<work[i]<<" got salary "<<salarystaff[i]<<endl;
           numb++;
        }
    }
};
int Management ::numb=1; //the default value is 0
int main()
{
    Management LBPS;
    LBPS.teacher();
    LBPS.guard();
    LBPS.other_staff();
    LBPS.display_teacher();
    LBPS.display_guard();
    LBPS.display_otherstaff();
}
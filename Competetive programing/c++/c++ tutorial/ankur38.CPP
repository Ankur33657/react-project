//Print Maximum and minimum number of an array and sum of all the elements of an array
#include <iostream>
using namespace std;
int main(){
  int n,sumMarks;
  cout<<"Enter the number of subject in your class"<<endl;
  cin>>n;
  int Marks[n];
  cout<<"Enter the marks of subject"<<endl;
  for(int i=0;i<n;i++){
      cin>>Marks[i];
  }
  int maxNo= INT_MIN;
  int minNo= INT_MAX;
  for(int i=0;i<n;i++){
      if(Marks[i]>maxNo){
          maxNo=Marks[i];
      if(Marks[i]<minNo){
              minNo=Marks[i];
          }
      }
  }
  cout<<"The max marks of subject is "<<maxNo<<" and the minimum marks is "<<minNo<<endl;
  for(int i=0;i<n;i++){
      sumMarks += Marks[i];
  }
  cout<<"Total marks is "<<sumMarks<<endl;
  cout<<" percentage  got  "<<sumMarks/(float)n<<endl;

}
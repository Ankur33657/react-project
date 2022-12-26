//This is programe that manage the record of Renu bahar kirana shop..
#include <iostream>
using namespace std;
class dukan{
 int Item_id[100];   
 string Item_name[100]; 
 int Item_price[100];
 int count=1;
 public:
 int n;
 void detail(void){
   for(int i=1;i<=n;i++){  
   cout<<"Enter the name of product"<<endl;
   cin>>Item_name[count];
   cout<<"Enter the Id of product"<<endl;
   cin>>Item_id[count];
   cout<<"Enter price"<<endl;
   cin>>Item_price[count];
   count++;
   }
 }
void display(void){
  for(int i=1;i<=n;i++){
           cout<<"The name of item is "<<Item_name[i]<<" ";
           cout<<"whose id is "<<Item_id[i]<<" ";
           cout<<"cost of it "<<Item_price[i]<<endl;
       }
   }
 
 void No_of_product(void){
    cout<<"Enter the no of item"<<endl;
    cin>>n;
 }  
};
int main(){
    dukan lakhmi;
    lakhmi.No_of_product();
    lakhmi.detail();
    lakhmi.display();
}
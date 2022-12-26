#include <stdio.h>
int main(){
    /*float salary[]= {10000.00,12500.75,13800.25,12700.80,11200.45};
    for(int i=0;i<5;i++){
        printf("Salary of %dth person is %.2f\n",i+1,salary[i]);
    }*/
    float sal[5];
    for(int i=0;i<5;i++){
        printf("Enter the salary of %dth person",i+1);
        scanf("%f",&sal[i]);
    }
    //for printing the salary
    for(int j=0;j<5;j++){
        printf("salary of %dth person is %.2f\n",j+1,sal[j]);
    }

}
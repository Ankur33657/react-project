// #include <stdio.h>
// int main(){
//     int arr1[3][3];
//     int arr2[3][3];
//    double div[3][3];
//     printf("Enter the elements of matrix 1:\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("\nEnter the elements of 2nd matrix:\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr2[3][3]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             div[i][j]=((float)arr1[i][j])/arr2[i][j];
//         }
//     }
//     printf("\n The simple Division of two matrix is\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%.2f ",div[i][j]);
//         }
//         printf("\n");
//     }

// }
// #include <stdio.h>
// int main(){
//     int a,b;
//     int mul=1;
//     printf("Enter the starting point of loop:\n");
//     scanf("%d",&a);
//     printf("Enter the end point of loop:\n");
//     scanf("%d",&b);
//     for(int i=a;i<b;i++){
//         if(i%8==0){
//         mul=mul*i;
//         }
//     }
//     printf("The multiplication of all the integer greater than %d and less than %d  and are divisible by 8 is %d",a,b,mul); 
   
// }
#include <stdio.h>
     int main(){
         int a[3][3],b[3][3];
         double c[3][3];
         printf("\n Enter the Elements of matrix A:\n");
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 scanf("%d",&a[i][j]);
             }
         }
         printf("Enter the elements of matrix 2:\n");
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 scanf("%d",&b[i][j]);
             }
         }
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
               c[i][j]=(float)a[i][j]/b[i][j];  
             }
         }
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 printf("%.2f ",c[i][j]);
             }
             printf("\n");
         }
     }
         
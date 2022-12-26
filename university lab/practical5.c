// #include <stdio.h>
// int main(){
//     int n;
//     int y=0;
//     printf("Enter the size of an array:\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of an array:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     //Form selection shorting
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//           if(arr[i]>arr[j]){
//               int temp = arr[j];
//               arr[j]=arr[i];
//               arr[i]=temp;

//           }
//         }
//     }
//     printf("\n Shorted array are\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     int z;
//     printf("\n Enter the searching element:");
//     scanf("%d",&z);
//     //using binary search method:-
//     int s=0;
//     int e=n-1;
//     int m;
//     for(int i=0;i<n;i++){
//     m = (s+e)/2;
//     if(arr[m]>z){
//      e=m-1;
//     }
//     if(arr[m]<z){
//         s=m+1;
//     }
//     if(arr[m]==z){
//         printf("Element found at %d position of an array",m+1);
//         y=1;
//         break;
//     }
//     }
//     if(y==0){
//         printf("\nElement not found\n");
//     }
//     }


//    /* // This code is a particular case ie-rows and column =3:
//     #include <stdio.h>
//     int main(){
//         int arr1[3][3],arr2[3][3];
//         int sub[3][3];
//         int add[3][3];
//         int z;
//         printf("Enter the elements of 1st matrix\n");
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//         }
//         printf("\n Enter the elements of 2nd Matrix:\n");
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//             scanf("%d",&arr2[3][3]);
//             }
//         }
//         //multiplication
//         int mul[3][3];
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//             mul[i][j]=0;
//                 for(int k=0;k<3;k++){
//                 mul[i][j]+=arr1[i][k]*arr2[k][j];
//                 }
//             }
//         }
//         //Transposition
//         int trans[3][3]={0};
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//             trans[j][i]= arr1[i][j];
//             }
//         }
//         printf("Enter\n '1'=  Addition\n '2' =subtraction\n '3'= Multiplication \n '4'=Transposition of 1st matrix:\n");
//         scanf("%d",&z);
//         switch(z){
//         case 1:
//         printf("\nAddition\n");
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 add[i][j]= arr1[i][j] + arr2[i][j];
//                 printf("%d\t ",add[i][j]);
//             }
//             printf("\n");
//         }
//         break;
//         case 2:
//         printf("\nsubtraction\n");
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 sub[i][j]=arr1[i][j] - arr2[i][j];
//                 printf("%d\t",sub[i][j]);
//             }
//             printf("\n");
//         }
//         break;
//         case 3:
//         printf("\n Multiplication\n");
//          for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 printf("%d\t",mul[i][j]);
//             }
//             printf("\n");
//         }
//         break;
//         case 4:
//         printf("\n Transposion of 1st matrix\n");
//          for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 printf("%d\t",mul[i][j]);
//             }
//             printf("\n");
//         }
//         break;
//         default:
//         printf("Wrong input:");

//         }
//     }
// */
// #include <stdio.h>

// int main()
// {
//     int p,b,i;
//     printf("ENTER THE NO OF ELEMENTS=");
//     scanf("%d",&p);
//     int a[p];
//     printf("ENTER THE ELEMENTS =");
//     for(i=0;i<p;i++)
//     {
        
//         scanf("%d",&a[i]);
//     }
    
//     printf("\n ENTER THE ELEMENT TO SEARCH=");
//     scanf("%d",&b);
//     int found=0;
//     for(i=0;i<p;i++)
//     {
//     if(a[i]==b)
//     {
//         found = 1;
//         break;
//     }
//     }
//     if(found==1)
//     {
//         printf("\n%d is found at position %d",b,i+1);
//     }
//     else
//     {
//         printf("%d is not found ",b);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void main() {
// 	char name[10][8], Tname[10][8], temp[8];
// 	int i, j, N;
//     char*ptr;
//     int*a;
//     a=(int*)malloc(sizeof(N));
//     ptr=(char*)calloc(80,sizeof(name[10][8]));
// 	printf("Enter the number  of city\n");
// 	scanf("%d", &N);
// 	printf("Enter %d names of city not more than 6 words each\n", N);
// 	for (i=0; i< N ; i++) {
// 		scanf("%s",name[i]);
// 		strcpy (Tname[i], name[i]);
//         ptr++;
// 	}
//     ptr=(ptr-N);
// 	for (i=0; i < N-1 ; i++) {
// 		for (j=i+1; j< N; j++) {
// 			if(strcmpi(name[i],name[j]) > 0) {
// 				strcpy(temp,name[i]);
// 				strcpy(name[i],name[j]);
// 				strcpy(name[j],temp);
//                 ptr++;
//                 a++;
// 			}
// 		}
// 	}
// 	printf("Sorted names cities\n");
// 	for (i=0; i< N ; i++) {
// 		printf("%s\n", name[i]);
// 	}
// }
// #include <stdio.h>
// struct student{
//         char name[20];
//         char branch[20];
//         int rollno  ; 
//         int year;
// }s1 ;
// int main(){
//     printf("\n Chehak");
//     printf("\n 21BCS2198");
    
//     printf("\n enter student name::");
//     scanf("%s",&s1.name);
//     printf("\n enter  roll no::");
//     scanf("%d",&s1.rollno);
//     printf("\n enter branch");
//     scanf("%s",&s1.branch);
//     printf("\n enter year");
//     scanf("%d",&s1.year);

// printf("\n name %s",s1.name);
// printf("\n roll no %d",s1.rollno);
// printf("\n branch %s",s1.branch);
// printf("\n year %d",s1.year);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void main() {
// 	char name[10][8], Tname[10][8], temp[8];
// 	int i, j, N;
//     char*ptr;
//     int*a;
//     a=(int*)malloc(sizeof(N));
//     ptr=(char*)calloc(80,sizeof(name[10][8]));
//     printf("\n Chehak");
//     printf("\n 21BCS2198");
// 	printf("\n Enter the number  of city\n");
// 	scanf("%d", &N);
// 	printf("Enter %d names of city not more than 6 words each\n", N);
// 	for (i=0; i< N ; i++) {
// 		scanf("%s",name[i]);
// 		strcpy (Tname[i], name[i]);
//         ptr++;
// 	}
//     ptr=(ptr-N);
// 	for (i=0; i < N-1 ; i++) {
// 		for (j=i+1; j< N; j++) {
// 			if(strcmpi(name[i],name[j]) > 0) {
// 				strcpy(temp,name[i]);
// 				strcpy(name[i],name[j]);
// 				strcpy(name[j],temp);
//                 ptr++;
//                 a++;
// 			}
// 		}
// 	}
// 	printf("Sorted names cities\n");
// 	for (i=0; i< N ; i++) {
// 		printf("%s\n", name[i]);
// 	}
// }
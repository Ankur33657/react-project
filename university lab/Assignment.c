// #include <stdio.h>
// void findFact(int n,int* f)
// {
//         int i;

//        *f =1;
//        for(i=1;i<=n;i++)
//        *f=*f*i;
//        }
// int main()
// {
//          int fact,num1;
// 		printf("  factorial of a number:\n"); 
// 		printf(" Input a number : ");
// 		scanf("%d",&num1);		 
//         findFact(num1,&fact);
//         printf(" The Factorial of %d is : %d \n\n",num1,fact);
//         }

// #include <stdio.h>
// int main()
// {
//     char str[100];
//     char *p;
//     int  v=0,c=0;

//     printf("Enter any string: ");
//     gets(str);
//     p=str;
//     while(*p!='\0')
//     {
//         if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
//         		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
//             v++;
//         else
//             c++;
//         p++;
//     }

//     printf("Number of Vowels in String: %d\n",v);
//     printf("Number of Consonants in String: %d",c);
//     return 0;
//}
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
// struct  video_library{
// char title[20];
// char Language[30];
// int Production_cost;
// int year;
// };
// int main(){
//     struct video_library e1;
// printf("Enter the details\n");
// printf("Title\n");
// scanf("%s",&e1.title);
// printf("Language\n");
// scanf("%s",&e1.Language);
// printf("Production Cost\n");
// scanf("%d",&e1.Production_cost);
// printf("Year of Realease\n");
// scanf("%d",&e1.year);
// printf("The detail of movie is:\n Title-%s\nLanguage-%s\nProduction cost-%d\n Year of Realease-%d\n",e1.title,e1.Language,e1.Production_cost,e1.year);

// }
// #include <stdio.h>
// #include <stdlib.h>
// struct Date{
//     int day;
//     int month;
//     int year
// };
// int main(){
//     struct Date Dt;
//     int d,m,y;
// printf("Enter\nday-month-year\n ");
// scanf("%d%d%d",&Dt.day,&Dt.month,&Dt.year);
// if((Dt.day>31)|| (Dt.month>12))
// {
//     printf("Incorrect input");
//     exit(0);
// }
//     printf("\n On Adding 45 days to the current date:\n");
// d=Dt.day;
// y=Dt.year;
// m=Dt.month;
// if( (Dt.month==1) || (Dt.month==3)  || (Dt.month==5) || (Dt.month==7) || (Dt.month==8) || (Dt.month==10))
//  {
//  d= d+14;
//  m = m + 1; 
// if(d>31){
//     d=d-31;
//     m= m+1;
// }
// }
// if((Dt.month==4) || (Dt.month==6) || (Dt.month==9) || (Dt.month==11)){
//     d=d+15;
//     m=m + 1;
//     if(d>30){
//         d=d-30;
//         m=m+1;
//     if(m>12){
//         m=1;
//         y= y + 1;
//     }
//     }
// }
// if(Dt.month==12){
// d=d+14;
// m=1;
// y=y +1;
// if(d>31){
//     d=d-31;
//     m=2;
// }

// }
// printf("\nThe new date is \n");
// printf("%d-%d-%d",d,m,y);
// }
// #include <stdio.h>

 

// void main()

// {

   

//   struct details

//   {

//     char name[20];

//     char branch[50];

//     int year;

//     int roll;

     

//   };

//   struct details item[50];

//   int n, i;

 

//   printf("Enter number of records:");

//   scanf("%d", &n);

//   fflush(stdin);

//   for (i = 0; i < n; i++)

//   {

//     fflush(stdin);

//     printf("Name: \n");

//     scanf("%s", item[i].name);

//     fflush(stdin);

//     printf("Branch \n");

//     scanf("%s", &item[i].branch);

//     fflush(stdin);

//     printf("Year: \n");

//     scanf("%d", &item[i].year);

//     fflush(stdin);

//     printf("Roll number: \n");

//     scanf("%d", &item[i].roll);

//     fflush(stdin);

     

//   }

//   printf("  ** STUDENT INFO ** \n");

//   printf("-------------------------------------------\n");

//   printf("S.N.|  Roll no  | Name | Branch | Year \n");

//   printf("--------------------------------------------\n");

//   for (i = 0; i < n; i++)

//     printf(" %d    %d     %s  %s   %d \n", i + 1, item[i].roll, item[i].name,item[i].branch,item[i].year);

//   printf("--------------------------------------------\n");

// }
// #include <stdio.h>

 

// void main()

// {

   

//   struct details

//   {

//     char name[20];

//     char city[50];

//     long int contact;

     

//   };

//   struct details item[50];

//   int n, i;

 

//   printf("Enter number of records:");

//   scanf("%d", &n);

//   fflush(stdin);

//   for (i = 0; i < n; i++)

//   {

//     fflush(stdin);

//     printf("Name: \n");

//     scanf("%s", item[i].name);

//     fflush(stdin);

//     printf("City \n");

//     scanf("%s", &item[i].city);

//     fflush(stdin);

//     printf("Contact: \n");

//     scanf("%ld", &item[i].contact);

//     fflush(stdin);

     

//   }

//   printf("  ** ADDRESS BOOK ** \n");

//   printf("-------------------------------------------\n");

//   printf("S.N.|  NAME  | City | Contact| \n");

//   printf("--------------------------------------------\n");

//   for (i = 0; i < n; i++)

//     printf(" %d    %s  %s  %ld \n", i + 1, item[i].name, item[i].city,item[i].contact);

//   printf("--------------------------------------------\n");

// }
// #include<stdio.h>
 
// void findFactorial(int,int *);
// int main(){
//   int i,factorial,num;
 
//   printf("Enter a number: ");
//   scanf("%d",&num);
 
//   findFactorial(num,&factorial);
//   printf("Factorial of %d is: %d",num,factorial);
 
//   return 0;
// }
 
// void findFactorial(int num,int *factorial){
//     int i;
 
//     *factorial =1;
 
//     for(i=1;i<=num;i++)
//       *factorial=*factorial*i;
// }
// #include <stdio.h>
// struct costumer{
//     char name[50];
//     int account_no;
//     float balance;
// }c[12];
// int main(){
// printf("Enter the details of all the students:\n");

// for(int i=0;i<12;i++){
//     printf("Name- ");
//     scanf("%s",&c[i].name);
//     printf("Account_No- ");
//     scanf("%d",&c[i].account_no);
//     printf("Balance($)- ");
//     scanf("%f",&c[i].balance);
// }
// void balance_less(void){
//     printf("custmber having balance less than $200 are:-\n");
// for(int j=0;j<12;j++){
// if(c[j].balance < 200){
//     printf("Name- %s\n",c[j].name);
// }
// }
// }
// balance_less();
// void bonus(void){
//     printf("Bonus will be added to these person\n");
// for(int k=0;k<12;k++){
// if(c[k].balance>1000){
//     float z= c[k].balance;
//     c[k].balance=c[k].balance + 100;
//     printf("Pervious balance is %.2f and inc balance is %.2f\n",z,c[k].balance);
// }
// }
// }
// bonus();

// }
// #include <stdio.h>
// struct student{
//     int Roll_no;
//     char name[50];
//     char branch[30];
//     int year;
// }s[3];
// int main(){
// printf("Enter the details of students:\n");
// for(int i=0;i<3;i++){
//     printf("Input details of %dth student:-",i+1);
//     printf("Roll no- ");
//     scanf("%d",&s[i].Roll_no);
//     printf("Name- ");
//     scanf("%s",s[i].name);
//     printf("Branch- ");
//     scanf("%s",&s[i].branch);
//     printf("year of joining- ");
//     scanf("%d",&s[i].year);
// }
// printf("The details of all the students are:-\n");
// for(int j=0;j<3;j++){
//     printf("%dth student details:-\n",j+1);
//     printf("Name-%s\n Roll_no-%d\n Branch-%s\n Year of joining-%d\n ",s[j].name,s[j].Roll_no,s[j].branch,s[j].year);
// }
// }
// #include <stdio.h>
// typedef struct complex {
//     float real;
//     float imag;
// } complex;

// complex add(complex n1, complex n2);

// int main() {
//     complex n1, n2, result;

//     printf("For 1st complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n1.real, &n1.imag);
//     printf("\nFor 2nd complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n2.real, &n2.imag);

//     result = add(n1, n2);

//     printf("Sum = %.1f + %.1fi", result.real, result.imag);
//     return 0;
// }

// complex add(complex n1, complex n2) {
//     complex temp;
//     temp.real = n1.real + n2.real;
//     temp.imag = n1.imag + n2.imag;
//     return (temp);
// }
#include <stdio.h>
#include <stdlib.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        int*ptr=&n;
        printf("Enter the value of N \n");
        scanf("%d", &n);
        ptr=(int*)malloc(sizeof(n));
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
            free(ptr);
 
    }
//PR4 Q5 write a program to print the below pattern using nested for loop.
/* return
1        1
12      21
123    321
1234  4321
1234554321
 */
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s;
clrscr();
for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
   printf("%d",j);
   }
     for(j=i*2;j<5*2;j++){
     printf(" ");}
       for(j=i;j>=1;j--){
       printf("%d",j);}
printf("\n");}

getch();}
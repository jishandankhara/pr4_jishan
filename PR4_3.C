//PR4 Q2 write a program to print the below pattern using nested for loop.
/* return
    5
   45
  345
 2345
12345
 */
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s;
clrscr();
for(i=5;i>=1;i--){
 for(s=1;s<=i;s++){
  printf(" ");}
   for(j=i;j<=5;j++){

  printf("%d",j);}
   printf("\n");}

getch();}

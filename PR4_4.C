//PR4 Q4 write a program to print the below pattern using nested for loop.
/* return
10101
 1010
  101
   10
    1
 */
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s;
clrscr();
for(i=1;i<=5;i++){
  for(s=1;s<=i;s++){
  printf(" ");}
   for(j=5;j>=i;j--){
   printf("%d",j%2);}

   printf("\n");}

getch();}
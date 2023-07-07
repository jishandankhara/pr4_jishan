// pr3 Q2 werie a program to print the below pattern using nested for loop.
/*
11
11 12
11 12 13
11 12 13 14
11 12 13 14 15
*/
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s=11;
clrscr();
for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
   printf(" %d",s++);}printf("\n");}


getch();}
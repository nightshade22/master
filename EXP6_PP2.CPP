#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,k,i;
 int a[8]={6,7,8,4,2,7,9,56};
 printf("Enter key");
 scanf("%d",&k);

 for(i=0;i<=7;i++)
 {
  if(a[i]==k)
  {
   printf("key was found at position %d",i);
   break;
  }
 }
 if(i==8)
 {
  printf("\ngiven element was not found");
 }

 getch();
}
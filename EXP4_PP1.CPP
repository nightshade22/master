#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,n;
 printf("enter no of rows\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }
 printf("run successfully by Akshay Pathak");
 getch();
}

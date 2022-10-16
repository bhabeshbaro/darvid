//program to print the natural number from 1 to n//



#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i;
    
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    for(i=1;  i<=n;  i++)
                printf("%8d",i);
    getch();
}
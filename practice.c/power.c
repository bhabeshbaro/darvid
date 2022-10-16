#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,value;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("enter c\n");
    scanf("%d",&c);
     value=pow(a,2)+pow(b,4)+pow(c,5);
    printf("the value is %d",value);
    return 0;
}
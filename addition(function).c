//addition of two numbers using fuction

#include<stdio.h>
int y;
int add(int m,int n)
{  
    if(n==0){
        return m;
    }
    y=add(m,n-1)+1;
    return y;
}
int main()
{
    int a,b,r;
    printf("enter the two number:\n");
    scanf("%d%d",&a,&b);
    r=add(a,b);
    printf("\n sum of the two number is :%d",r);
    return 0;
}
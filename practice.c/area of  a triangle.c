#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("enter the first side\n");
    scanf("%f", &a);
    printf("enter the second side\n");
    scanf("%f", &b);
    printf("enter the third side\n");
    scanf("%f", &c);

    s=(a+b+c/2);
    area=s*(s-a)*(s-b)*(s-c);
    printf("area of the triangle is %fsq unit", area);
    return 0;
}
#include<stdio.h>
int main()
{
    int c,f,t;
    printf("Enter 1 to convert c to f\nEnter 2 to convert f to c\n");
    scanf(" %d",&t);

    if(t==1){
        printf("input temp in celsius");
        scanf("%d",&c);

        f=9/5*c+32
        printf("%d is converted to %df",c,f);
    }
    if else(t==2){
        printf("input temp in fahrenheit");
        scanf("%d",&f);

        c=5*(f-32)/9
        printf("%d is converted to %dc",f,c);

    }
    else{
        printf("ERROR!");
    }
    return 0;

}
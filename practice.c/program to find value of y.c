//program to find the value of y=1.36*sqrt(1+x+x*x*x)+pow(x,1/4)+exp(x)//




#include<stdio.h>
#include<conio.h>
int main()
{
    float x,y;
    printf("\n_________");
    printf("\n x  y");
    printf("\n_________");
    //loop to generate and print x and y//
    for(x=1.0  ;x<=3.0  ;x=x+0.2)

    {
        y=1.36*sqrt(1+x+x*x*x)+pow(x,1/4)+exp(x);
        printf("\n  %6.2f  %6.2f  %6.2f" ,x,y);

    }
    printf("\n _______");
    getch();
}
#include<stdio.h>

int main(){
    int a, b, c, c1, c2, c3;
    char isTriangle= 'y';
    do{
        printf("Enter the sides of traingle");
        scanf("%d %d %d",&a, &b, &c);

        c1= a>=1 && a<=10;
        c2= b>=1 && b<=10;
        c3= c>=1 && c<=10;
        
        if(!c1)
            printf("The value of a is not in range");

        if(!c2)
            printf("The value of b is not in range");
        
        if(!c3)
            printf("The value of c is not in range");
    }
    while(!c1 &&!c2 &&!c3);

    if(a<b+c && b<a+c && c< a+b)
        isTriangle='y';
    else
        isTriangle='n';

    if (isTriangle=='y')
    {
        if((a==b) && (b==c))
            printf("Equilateral triangle");
        
        else if ((a!=b) && (b!=c) && (c!=a))
            printf("Scalene Traingle");
        
        else
            printf("Isoclene Triangle");
    }
    else
        printf("Not a Traingle");
    return 0;
}

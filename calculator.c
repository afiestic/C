//program to print arithmetic operations on 2 numbers
#include <stdio.h>
int main(){
//with user input
//addition operator
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Addition of %d and %d is %d\n",a,b,a+b);
    //subtraction operator
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
    //multiplication operator
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
    //division operator
    printf("Division of %d and %d is %d\n",a,b,a/b);
    //modulus operator
    printf("Modulus of %d and %d is %d\n",a,b,a%b);

    //without use input
    int a1,b1;
    printf("Enter two numbers\n");
    a1=10;
    b1=20;
    printf("Addition of %d and %d is %d\n",a1,b1,a1+b1);
    printf("Subtraction of %d and %d is %d\n",a1,b1,a1-b1);
    printf("Multiplication of %d and %d is %d\n",a1,b1,a1*b1);
    printf("Division of %d and %d is %d\n",a1,b1,a1/b1);
    printf("Modulus of %d and %d is %d\n",a1,b1,a1%b1);
    return 0;
}

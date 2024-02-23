#include <stdio.h>
int add(intx, inty);
int sub(intx, inty);
int mul(intx, inty);
int div(intx, inty);
int main(){
    int choice, num1, num2,sum1,sub1,mul1,div1
    printf("1, addition\n");
    printf("2, subtraction\n");
    printf("3, multiplication\n");
    printf("4, division\n");
    
    scanf("%d" , choice);

    printf("enter the two numbers");
    scanf("%d %d" , &num1,&num2);
    switch(choice)
    {
        case 1:
        sum1 = add(num1, num2);
        printf("sum = %d, sum1");
        break;
    
    case 2:
    sub1 = sub(num2, num2);
    printf("subtraction = %d,, sub1");

    case3:
    mul1 = mul(num1, num2);
    printf("multiplication + %d, mul1");
    break;

    case 4:
    div1 = div(num1, num2);
    printf("division = %d, div1");
    break;
    }
}
int add(intx, inty)
{
    intz;
    z = x+y;
    return(z);
}
int sub(intx, inty)
{
    int z;
    z = x-y;
    return(z);
}
int mul(intx, inty)
{
    int z;
    z = x*y;
    return (z);
}
int div(intx, inty)
{
    int z;
    z = x/y;
    return(z);
}
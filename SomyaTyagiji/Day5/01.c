#include<stdio.h>
 int main(){
 int num, i,sum = 0;

 printf("Enter the number:");
 scanf("%d",&num);
 if(num == 0){
    printf("0 is not a perfect number");
    return 0;}

 for (i =1;i<num;i++){
if(num % i == 0 )
{   sum += i;}}
if (sum == num){
printf("%d is a perfect number",num);}
else{
printf("%d is not a perfect number",num);}
return 0;}





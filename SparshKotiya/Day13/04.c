#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"abbba"}
    int l=0;
    int h=strlen(str)-1;
    while(h>1){
        if([str[]++]!=str[h--]){
            print("%s is not a palindrome\n",str);

        }
    }
    printf("%s",str);
    return 0;
}
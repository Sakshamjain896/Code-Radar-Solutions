#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Hexadecimal representation: %x\n", num);
    printf("Octal representation: %o\n", num);
    
    return 0;
}
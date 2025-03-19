#include<stdio.h>
int main(){
    char name[50], hobby[50];
    int age;

    scanf("%c %d %c", &name, &age, &hobby);
    printf("Name: %c\nAge: %d\nHobby: %c",name,age,hobby);

    return 0;
}
#include<stdio.h>
int main(){
   float a,b,product;
   printf("Enter the first number: ");
   scanf("%f",&a);
   printf("Enter the second numner: ");
   scanf("%f", &b);

   product = a*b;
   printf("Product: %.2f\n",a,b,product);

   return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   float tc,tf;
   printf("ENTER TEMPERATURE IN CELCIUS : \n");
   scanf("%f",&tc);
   tf=(tc*9/5)+32;
   printf("TEMPERATURE IN FAHRENHEIT %.2f : \n",tf);

    return 0;
}
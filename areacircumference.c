// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   float area,r,circ;
   float pi= 3.14159;
   printf("ENTER RADIUS OF CIRCLE: \n");
   scanf("%f", &r);
   area = pi*r*r;
   circ = 2*pi*r;
   printf("AREA OF CIRCLE : %f \n",area);
   printf("CIRCUMFERENCE OF CIRCLE : %f \n",circ);

    return 0;
}
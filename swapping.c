// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("ENTER A\n");
    scanf("%d",&a);
    printf("ENTER B\n");
    scanf("%d",&b);
     c=a;
     a=b;
     b=c;
     printf("VALUES AFTER SWAPPING \n");
      printf("A : %d \n",a);
     printf("B : %d \n",b);
    


    return 0;
}
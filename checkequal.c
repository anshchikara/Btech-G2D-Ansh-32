// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("ENTER A\n");
    scanf("%d",&a);
    printf("ENTER B\n");
    scanf("%d",&b);

    if(a==b) {
        printf("BOTH NUMBERS ARE EQUAL");
    }else {
        printf("BOTH NUMBERS ARE NOT EQUAL"); 
    }
     return 0;
}
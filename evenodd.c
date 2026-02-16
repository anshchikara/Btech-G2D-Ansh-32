
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("ENTER A NUMBER\n");
    scanf("%d",&a);

    if(a%2==0) {
        printf("NUMBER IS EVEN");
    }else {
        printf("NUMBER IS ODD"); 
    }
     return 0;
}
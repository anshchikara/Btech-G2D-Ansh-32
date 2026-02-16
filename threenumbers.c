// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("ENTER A\n");
    scanf("%d",&a);
    printf("ENTER B\n");
    scanf("%d",&b);
    printf("ENTER C\n");
    scanf("%d",&c);

    if(a==b==c) {
        printf("ALL NUMBERS ARE EQUAL");
     } 
    else if(a>b&&a>c){
        printf("A IS LARGEST");
    }
    else if(b>a&&b>c){
        printf("A IS LARGEST");
    }
    else{
        printf("C IS LARGEST");
    }
     return 0;
}
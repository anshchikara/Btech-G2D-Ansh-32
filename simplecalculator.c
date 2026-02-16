// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float num1,num2,result;
    char ch;
    
    printf("Enter operation to be performed (+-*/) : ");
    scanf("%c", &ch);
    printf("Enter First Number : ");
    scanf("%f",&num1);
     printf("Enter Second Number : ");
    scanf("%f",&num2);
    
    
    if(ch=='+')
    {
        result=num1+num2;
        printf("%.2f + %.2f = %.2f",num1,num2,result);
    } 
    else if(ch=='-')
    {
        result=num1-num2;
        printf("%.2f - %.2f = %.2f",num1,num2,result);
    } 
     else if(ch=='*')
    {
        result=num1*num2;
        printf("%.2f * %.2f = %.2f",num1,num2,result);
    }  else if(ch=='/')
    {
        if(num2==0)
        {printf("Division by zero error");}
        else{
        result=num1/num2;
        printf("%.2f / %.2f = %.2f",num1,num2,result);}
    } 
    else
    {
        printf("INVALID OPERATION");
    }
    
    

    return 0;
}
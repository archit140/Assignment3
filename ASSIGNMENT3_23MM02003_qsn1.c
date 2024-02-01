#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>0){
        printf("number is positive");
    }
    else if(num==0){
        printf("Number is zero");

    }
    else{
        printf("Number is negative");
    }
    return 0;




}
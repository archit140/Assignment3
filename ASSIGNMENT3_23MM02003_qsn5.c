#include <stdio.h>
int main()
{
    int days;
    printf("enter the number of late days book submitted:");
    scanf("%d",&days);
    if(days<=5){
        printf("Fine 1 rupees");
    }
    else if(days>5 && days<=10){
        printf("Fine 5 rupees");

    }
    else if (days>10 && days<=30){
        printf("Fine 10 rupees");

    }
    else{
        printf("Membership Cancelled");

    }
    return 0;

}
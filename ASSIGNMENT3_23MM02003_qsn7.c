#include<stdio.h>

int main() {
    float Total, M, N, K;

    printf("Enter the total number of classes: ");
    scanf("%f", &K);
    printf("Enter the total number of classes attended: ");
    scanf("%f", &N);
    if (N > K) {
        printf("N should be less than or equal to K. Please enter valid input.\n");
        return 1;  
    }

    
    float W = N / K;

   
    printf("Enter the total number of marks: ");
    scanf("%f", &M);

    if (M > 100 || M < 0) {
        printf("Please enter the marks between 0 and 100.\n");
        return 1;  
    }

    
    Total = M * W;

    
    if (Total >= 90) {
        printf("Grade = EX\n");
    } else if (Total >= 80 && Total < 89) {
        printf("Grade = A\n");
    } else if (Total >= 70 && Total < 79) {
        printf("Grade = B\n");
    } else if (Total >= 60 && Total < 69) {
        printf("Grade = C\n");
    } else if (Total >= 50 && Total < 59) {
        printf("Grade = D\n");
    } else if (Total >= 40 && Total < 49) {
        printf("Grade = P\n");
    } else {
        printf("Grade = F\n");
    }

    return 0; 
}

    








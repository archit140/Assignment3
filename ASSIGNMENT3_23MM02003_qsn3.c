#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Given sides can form triangle");
    }
    else{
        printf("Given sides do not form triangle");
    }
    return 0;
}
#include <stdio.h>

int main()

{
    int i,sum,num;
    printf("Enter Number :");
    scanf("%d", &num);
    sum = 0;

    for(i=0; i <= num - 1; i++){
        sum = sum + 2 * i;
    } 
    printf("sum : %d\n",sum);

    return 0;
}
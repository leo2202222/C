#include <stdio.h>

int main()

{
    int i ,num,sum;
    printf("Enter Number :");
    scanf("%d", &num);
    sum = 1;

    for(i =1; i<= 12; i++){
        sum = num * i;
        printf("%d * %d = %d\n",num,i,sum);
    }
    return 0;
}
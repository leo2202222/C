#include <stdio.h>

int main()

{
    int num ,fact , i;
    fact = 1;
    printf("Factorial :");
    scanf("%d", &num);

    for(i =1; i <= num; i++ ){
        fact = fact * i;
    }

    printf("F(%d) = %d\n",num,fact);

    return 0;

}

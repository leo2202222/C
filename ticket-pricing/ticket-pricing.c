#include<stdio.h>

    int main()

{
    int Price;
    float Height;

    printf("Height :");
    scanf("%f", &Height);
    
    if(Height > 0){
        if(Height <= 130){
        Price = 50;
        }
        else{
        Price = 100;
        }
        printf("Price : %d Bath\n", Price);
        }
    else{
    printf("Error\n");
    }
    
    return 0;
}
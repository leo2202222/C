#include <stdio.h>

int main()

{
    int i,n,m,sum,fact,choice = 0;
    float area, height, base; 
        do{
        printf("###### Menu ######\n");
        printf("## 1. Factorial ##\n");
        printf("## 2. Summation ##\n");
        printf("## 3. Triangle  ##\n");
        printf("## 0. Exit      ##\n");
        printf("##################\n");

        printf("Enter choice :");
        scanf("%d",&choice);
        
        if(choice == 1){
            printf("Calculator Factorial\n");
            printf("Enter n :");
            scanf("%d",&n);
            fact = 1;
            for(i = 1; i <= n; i++){
                fact = fact * i;
            }
            printf("F(%d) = %d\n",n,fact);
        }
        else if(choice == 2){
            printf("Summation\n");
            printf("Enter n :");
            scanf("%d",&n);
            printf("Enter m :");
            scanf("%d",&m);
            sum = 0;
            for(i = n; i <= m; i++){
                sum = sum +i;
            }
            printf("sum = %d\n",sum);
        }
        else if(choice == 3){
            printf("Triangle area\n");
            printf("Enter base :");
            scanf("%f",&base);
            printf("Enter Height :");
            scanf("%f",&height);
            area = 0.5 * base * height;
            printf("Area : %f Unit^2\n",area);
        }
        else if (choice == 0){
            printf("Exit\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }while(choice != 0);
}
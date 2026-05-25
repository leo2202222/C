#include<stdio.h>

int main()
{
   float Min,Num1,Num2,Num3;
   printf("X :");
   scanf("%f", &Num1);

   printf("Y :");
   scanf("%f", &Num2);

   printf("Z :");
   scanf("%f", &Num3);

   if(Num1 < Num2){
        Min = Num1;
        
        if(Num1 < Num3){
            Min = Num1;
        }
        else{
            Min = Num3;
        }
    }else{
        Min = Num2;
    
        if(Num2 < Num3){
            Min = Num2;
        }
        else{
            Min = Num3;
        }
    }

    if(Min == Num1){
        printf("Answer is X = %f\n", Min);
    }
    else if(Min == Num2) {
        printf("Answer is Y = %f\n", Min);
    }
    else{
        printf("Answer is Z = %f\n", Min);
    }

    printf("Answer : %f\n",Min);

    return 0;
   
}
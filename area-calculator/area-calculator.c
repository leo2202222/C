#include <stdio.h>

int main()
{

    float Area,Height,Base,Radius;
    int Number;

    printf("Integer Number :");
    scanf("%d", &Number);

    if(Number % 2 == 0){
      printf("Base :");
      scanf("%f", &Base);
    
      if (Base > 0){
      printf("Height :");
      scanf("%f", &Height);
      
        if(Height > 0){
        Area = 1.0/2 * Base * Height;
        printf("Area : %f Unit^2\n",Area );
        }
        else {
        printf("Error\n");
     }
    }
      else{
        printf("Error\n");
      }
    }
  
  else{
      printf("Radius :");
      scanf("%f", &Radius);
    
    if (Radius > 0){
        Area = 3.14 *Radius * Radius;
        printf("Area : %f Unit^2\n",Area);
      }
      else{
        printf("Error\n");
      }
  }
    return 0;
}



      


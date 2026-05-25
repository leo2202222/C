#include <stdio.h>

int main()

{
    int Age;
      printf("Age :");
      scanf("%d", &Age);
    if(Age >= 0){
  
    if(Age <= 10){
      printf("Chlidren");
    }
    else if(Age <= 20){
      printf("Teenager");
    }
    else if(Age <= 35){
      printf("Adult");
    }
    else if(Age <= 55){
      printf("Middle age");
    } 
    else{
      printf("Old age");
    }
  }
    else{
      printf("Error\n");
    }
  

  
    return 0;
}

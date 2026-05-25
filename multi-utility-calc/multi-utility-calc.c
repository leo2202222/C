#include <stdio.h>

int main(){
    int choice = 0;
    
    do{
        printf("############## Menu ##############\n");
        printf("## 1.Even number or Odd number  ##\n");
        printf("## 2.Price of table             ##\n");
        printf("## 3.Max value                  ##\n");
        printf("## 0.Exit                       ##\n");
        printf("##################################\n");

        printf("Enter choice :");
        scanf("%d",&choice);
        
        if(choice == 1){
            int n;
            printf("Enter number :");
            scanf("%d",&n);

            if(n % 2 == 0){
                printf("Value is even\n");
            }
            else{
                printf("Value is odd\n"); 
            }
        }
        else if(choice == 2){
            int wood, pmahogany, poak, rprice, price;
            float width, length, area;
            
            printf("Enter width :");
            scanf("%f",&width);

            printf("Enter length :");
            scanf("%f",&length);

            printf("##### Wood #####\n");
            printf("## 1.mahogany ##\n");
            printf("## 2.oak      ##\n");
            printf("## 3.normal   ##\n");
            printf("################\n");
            printf("Enter wood type :");
            scanf("%d",&wood);
            
            pmahogany = 200;
            poak = 125;
            area = width * length;

            if(area > 750 ){
                rprice = 2000;
                if(wood == 1){
                    price = rprice + pmahogany;
                    printf("price : %d\n",price);
                }
                else if(wood == 2){
                    price = rprice + poak;
                    printf("price : %d\n",price);
                }
                else if(wood == 3){
                    price = rprice;
                    printf("price : %d\n",price);
                }
                else{
                    printf("Error\n");
                }
            }
            else{
                rprice = 1500;
                if(wood == 1){
                    price = rprice + pmahogany;
                    printf("price : %d\n",price);
                }
                else if(wood == 2){
                    price = rprice + poak;
                    printf("price : %d\n",price);
                }
                else if(wood == 3){
                    price = rprice;
                    printf("price : %d\n",price);
                }
                else{
                    printf("Error\n");
                }
            }
        }
        else if(choice == 3){
            int mid, min;
            float x, y, z, max;

            printf("Enter x :");
            scanf("%f",&x);

            printf("Enter y :");
            scanf("%f",&y);

            printf("Enter z :");
            scanf("%f",&z);
            
            if(x > y){
                if(x > z){
                    max = x;
                    printf("Max value is x : %.2f\n", max); 
                }
                else{
                    max = z;
                    printf("Max value is z : %.2f\n", max); 
                }
            }
            else{
                if(y > z){
                    max = y; 
                    printf("Max value is y : %.2f\n", max); 
                }
                else{
                    max = z;
                    printf("Max value is z : %.2f\n", max); 
                }
            }
        }
        else if(choice == 0){
            printf("Exit\n");
        }
        else{
            printf("Invalid choice\n");
        }

    } while(choice != 0);
    return 0;
}
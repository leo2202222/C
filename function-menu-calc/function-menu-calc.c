#include <stdio.h>


int summation(int m, int n);
float calArea(int choice);
float electronic(float V, float I, float R);

int main(){
    int schoice = 0;
    do{
        printf("###################\n");
        printf("## 1. Summation  ##\n");
        printf("## 2. Area       ##\n");
        printf("## 3. Electronic ##\n");
        printf("## 0. Exit       ##\n");
        printf("###################\n");

        printf("Enter choice :");
        scanf("%d", &schoice);

        if(schoice == 1){
            int m, n, sum;
            printf("Enter m :");
            scanf("%d", &m);
            printf("Enter n :");
            scanf("%d", &n);
            sum = summation(m, n);
            printf("Summation : %d\n", sum);
        }
        else if(schoice == 2){
            int choice = 0;
            float area;
            printf("###################\n");
            printf("## 1. Circle     ##\n");
            printf("## 2. Square     ##\n");
            printf("## 3. Triangle   ##\n");
            printf("###################\n");
            printf("Enter choice :");
            scanf("%d", &choice);
            area = calArea(choice);
            printf("Area : %f Unit^2\n", area);
        }
        else if(schoice == 3){
            float V, I, R;
            printf("Enter V :");
            scanf("%f", &V);
            printf("Enter I :");
            scanf("%f", &I);
            printf("Enter R :");
            scanf("%f", &R);
            
            
            electronic(V, I, R);
        }
        else if(schoice == 0){
            printf("Exit\n");
        }
        else{
            printf("invalid choice\n");
        }

    } while(schoice != 0);
    return 0;
}

int summation(int m, int n){
    int i, sum = 0;
    for(i = m; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

float calArea(int choice){
    while(1){
        if(choice == 1){
            float radius;
            printf("Enter radius :");
            scanf("%f", &radius);
            return 3.14 * radius * radius;
        }
        else if(choice == 2){
            float width, length;
            printf("Enter width :");
            scanf("%f", &width);
            printf("Enter length :");
            scanf("%f", &length);
            return width * length;
        }
        else if(choice == 3){
            float base, height;
            printf("Enter base :");
            scanf("%f", &base);
            printf("Enter height :");
            scanf("%f", &height);
            return 0.5 * base * height;
        }
        else{
            printf("Error\n");
            printf("###################\n");
            printf("## 1. Circle     ##\n");
            printf("## 2. Square     ##\n");
            printf("## 3. Triangle   ##\n");
            printf("###################\n");
            printf("Enter choice :");
            scanf("%d", &choice);
        }
    }   
}

float electronic(float V, float I, float R){
    while(1){
        int count = 0;
        if(V != 0) count++;
        if(I != 0) count++;
        if(R != 0) count++;
        
        if(count == 2){
            if(V == 0){
                V = I * R;
                printf("Voltage : %f V\n", V);
                return V; 
            }
            else if(I == 0){
                I = V / R;
                printf("Current : %f A\n", I);
                return I; 
            }
            else if(R == 0){
                R = V / I;
                printf("Resistance : %f Ohm\n", R);
                return R; 
            }
        }
        else{
            printf("Error case\n");
            printf("Enter V :");
            scanf("%f", &V);
            printf("Enter I :");
            scanf("%f", &I);
            printf("Enter R :");
            scanf("%f", &R);
        }
    }
}
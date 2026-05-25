#include<stdio.h>

int main()
{
    float Bonus,Bonus1,Bonus2,Bonus3,Bonus4,yTotal,mTotal,pBonus1,pBonus2,pBonus3,pBonus4,Price;

    printf("Salary :");
    scanf("%f", &mTotal);

    printf("Total Sales :");
    scanf("%f", &yTotal);

    // 🔥 ย้ายมาเช็กตรงนี้เป็นด่านแรก: ถ้าทั้งสองค่ามากกว่าหรือเท่ากับ 0 ถึงจะทำงาน
    if(mTotal >= 0 && yTotal >= 0){ 
        
        // โครงสร้างคำนวณโบนัสเดิมของคุณทั้งหมด ถูกย้ายเข้ามาอยู่ข้างในนี้
        if(yTotal < 120001){
            pBonus1 = 5.0/100;
            Bonus1 = mTotal * pBonus1;
            Bonus = Bonus1;
        }
        else{
            if(yTotal < 240001){
                pBonus2 = 10.0/100;
                Bonus2 = mTotal * pBonus2;
                Bonus = Bonus2;
            }
            else{
                if(yTotal < 360001){
                    pBonus3 = 20.0/100;
                    Bonus3 = mTotal * pBonus3;
                    Bonus = Bonus3;
                }
                else{
                    pBonus4 = 30.0 /100;
                    Bonus4 = mTotal * pBonus4;
                    Bonus = Bonus4;
                }
            }
        }

        // คำนวณรายได้สุทธิและแสดงผลเมื่อข้อมูลถูกต้อง
        Price = mTotal + Bonus;
        printf("Net Income : %f\n", Price);

    } 
    else {
        // ❌ ถ้า mTotal หรือ yTotal ตัวใดตัวหนึ่งติดลบ จะวิ่งมาทำที่นี่ทันที
        printf("Error\n");
    }

    return 0;
}
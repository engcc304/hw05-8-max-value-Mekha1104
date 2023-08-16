/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include <stdio.h>

int main() {
    int Num1, Num2, Num3;
    scanf("%d %d %d", &Num1, &Num2, &Num3);
    printf("1st Number = %d\n", Num1);
    printf("2nd Number = %d\n", Num2);
    printf("3rd Number = %d\n", Num3);

    if (Num1 > Num2 && Num1 > Num3) {
        printf("The 1rd Number is the greatest among three\n");
    }
    else if (Num2 > Num1 && Num2 > Num3) {
        printf("The 2nd Number is the greatest among three\n");
    }
    else {
        printf("The 3rd Number is the greatest among three\n");
    }

    return 0;
}
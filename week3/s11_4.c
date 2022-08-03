#include <stdio.h>
// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของ จำนวนที่น้อยที่สุด กับ จำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d", a + b);
    return 0;
}
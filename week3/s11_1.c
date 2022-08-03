#include <stdio.h>
// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของ จำนวนที่น้อยที่สุด กับ จำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int m = max(a, max(b, c));
    if (a == m)
    {
        printf("%d", b + c);
    }
    else if (b == m)
    {
        printf("%d", a + c);
    }
    else
    {
        printf("%d", a + b);
    }
    return 0;
}
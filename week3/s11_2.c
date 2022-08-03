#include <stdio.h>
// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของ จำนวนที่น้อยที่สุด กับ จำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ab = a + b, ac = a + c, bc = b + c;
    printf("%d", min(ab, min(ac, bc)));
    return 0;
}
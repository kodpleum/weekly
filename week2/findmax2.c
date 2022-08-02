#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)
// จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด (Level 1)
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max(a, max(b, c)));
    return 0;
}
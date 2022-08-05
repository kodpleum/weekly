#include <stdio.h>
//มีคนทั้งหมด n คน ต้องการให้ทุกคนมาจับมือกันทุกคน ต้องจับมือทั้งหมดกี่ครั้ง

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", (n * (n - 1)) / 2);
    return 0;
}
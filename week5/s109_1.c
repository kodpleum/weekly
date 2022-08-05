#include <stdio.h>
//มีคนทั้งหมด n คน ต้องการให้ทุกคนมาจับมือกันทุกคน ต้องจับมือทั้งหมดกี่ครั้ง

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, y = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        sum += y;
        y--;
    }
    printf("%d", sum);
    
    return 0;
}
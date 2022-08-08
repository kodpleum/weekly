#include <stdio.h>
// รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("%d %d", x, y);
    return 0;
}

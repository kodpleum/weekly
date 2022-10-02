//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
#include <stdio.h>
float square_root(float num)
{
    float sqrt = 1;
    for (int i = 0; i < num + 1; i++)
    {
        sqrt = ((num / sqrt) + sqrt) / 2;
    }
    return sqrt;
}

int main()
{
    float num;
    scanf("%f", &num);
    printf("%.4f", square_root(num));
    return 0;
}
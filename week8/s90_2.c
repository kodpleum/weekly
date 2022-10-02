//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
#include <stdio.h>
float square_root(int num)
{
    float min = 0, max = num, mid;
    while (min < max)
    {
        mid = (min + max + 0.0001) / 2;
        if (mid * mid <= num)
        {
            min = mid;
        }
        else
        {
            max = mid - 0.0001;
        }
    }
    return min;
}

int main()
{
    float num;
    scanf("%f", &num);
    printf("%.4f", square_root(num));
}
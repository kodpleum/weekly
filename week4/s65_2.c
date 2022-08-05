#include <stdio.h>
#include <string.h>
// จงเขียนโปรแกรมเพื่อรับ String 1 ชุดแล้วแสดงผลลัพธ์เป็นสามเหลี่ยมจาก string ที่รับเข้ามา ดังตัวอย่าง (Level 3)

int main()
{
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }    
    return 0;
}
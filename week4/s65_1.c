#include <stdio.h>
#include <string.h>
// จงเขียนโปรแกรมเพื่อรับ String 1 ชุดแล้วแสดงผลลัพธ์เป็นสามเหลี่ยมจาก string ที่รับเข้ามา ดังตัวอย่าง (Level 3)

int main()
{
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    int j = len;
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", str);
        str[j-1] = '\0';
        j--;
    }
    
    return 0;
}
#include <stdio.h>
// จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ c:\temp\data.txt ดังตัวอย่าง (Level 4)

int main()
{
    char str[1000];
    scanf("%[^.]", str);
    FILE *fptr = fopen("data.txt", "w");
    fprintf(fptr, "%s.", str);
    fclose(fptr);
    return 0;
}
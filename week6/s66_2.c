#include <stdio.h>

int main()
{
    FILE *fptr = fopen("data.txt", "w");
    while (1)
    {
        char ch = getchar();
        fprintf(fptr, "%c", ch);
        if (ch == '.')
        {
            break;
        }
    }
    fclose(fptr);
    return 0;
}
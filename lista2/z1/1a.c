#include <stdio.h>

int main(void)
{
    for(int i=32; i<128; i++)
        {
            printf("\nWynik:%d %c %X %o ", i, i, i, i);
        }
    return 0;
}

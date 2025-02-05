#include <stdio.h>
#include <math.h>

int main(void)
{
    float pi=M_PI;

    printf("Liczba pi:\n");

    for(int i=0; i<=10; i++)
        {
            printf("\n%.*f", i, pi);
        }
    return 0;
}

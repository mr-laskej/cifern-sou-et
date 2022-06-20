#include <stdio.h>

int main(void)
{
    int soucet = 0;
    int cislo;

    printf("Zadej cislo pro ciferny soucet: ");
    scanf("%d", &cislo);
    while (cislo > 0)
    {
        soucet += cislo % 10;
        cislo /= 10;
    }
    printf("Ciferny soucet cisla je: %d \n", soucet);
}


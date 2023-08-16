#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    double temp = 1;

    for (i = 1; i <= 50; i++)
    {
        temp *= 2;
        printf("%d. %0.2lf\n", i + 1, temp);
    }
}

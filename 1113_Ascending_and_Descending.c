#include <stdio.h>

int main()
{
    int x, y;

    int i;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x > y)
        {
            printf("Decrescente\n");
        }
        else if (y > x)
        {
            printf("Crescente\n");
        }
        if (x == y)
            break;
    }

    return 0;
}

#include <stdio.h>

int max_of_five(int a, int b, int c, int d, int e)
{
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    return max;
}

int main()
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d\n", max_of_five(a, b, c, d, e));

    return 0;
}

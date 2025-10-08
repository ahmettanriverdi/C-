#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;

    a = 0;
    ft_ft(&a);
    printf("a = %d\n", a);
    return 0;
}

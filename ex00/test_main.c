#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int a = 0;
    ft_ft(&a);
    printf("ex00: a = %d\n", a); // expected: 42
    return 0;
}

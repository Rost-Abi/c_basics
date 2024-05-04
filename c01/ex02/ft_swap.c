#include <stdio.h>
#include <assert.h>

void
ft_swap(int *a, int *b)
{
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

int main()
{
    int a, b;
    a = 77;
    b = 444;
    ft_swap(&a, &b);
    printf("A == %d, B ==  %d\n", a, b);
    assert(a == 444);
    printf("WORKS\n");
}
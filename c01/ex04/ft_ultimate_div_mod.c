#include <assert.h>

void
ft_ultimate_div_mod(int *a, int *b)
{
    int tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}

int main()
{
    int res = 30, mod = 12;
    ft_ultimate_div_mod(&res, &mod);
    assert(res == 2 && mod == 6);
}
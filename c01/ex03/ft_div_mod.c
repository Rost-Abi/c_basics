#include <assert.h>

void
ft_div_mod(int a, int b, int *div, int *mod)
{
 *div = a / b;
 *mod = a % b;
}

int main()
{
    int a = 30, b = 12, res, mod;
    ft_div_mod(a, b, &res, &mod);
    assert(res == 2 && mod == 6);
}
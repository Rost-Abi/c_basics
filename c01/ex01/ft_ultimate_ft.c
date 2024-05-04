#include <stdio.h>
#include <assert.h>

void
ft_ultimate_ft(int *********nbr)
{
   *********nbr = 42; 
}

int main()
{
    int n = 99;
    int *m = &n;
    int **mn = &m;
    int ***z = &mn;
    int ****x = &z;
    int *****y = &x;
    int ******u = &y;
    int *******i = &u;
    int ********o = &i;
    ft_ultimate_ft(&o);
    assert(n == 42);
    printf("WORKS\n");
}
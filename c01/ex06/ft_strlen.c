#include <stdio.h>
#include <assert.h>
#include <string.h>

int ft_strlen(char *str)
{
    int ret = 0;

   while(*str++)
   {
    ret++;
   }

   return ret;
}

int main()
{
    char s[30] = "Hello world\n";
    printf("Len == %d\n", ft_strlen(s));
    assert(strlen(s) == ft_strlen(s));
}
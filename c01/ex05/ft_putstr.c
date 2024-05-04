#include <unistd.h>

void
ft_putstr(char *str)
{
    while(*str)
    {
        write(STDOUT_FILENO, str, 1);
        str++;
    }
}

int main()
{
    char s[30] = "Hello world\n";
    ft_putstr(s);
}
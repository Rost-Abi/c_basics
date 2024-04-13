void ft_putchar(char c);

void ft_print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
        ft_putchar(letter++);
}

int main(){
    ft_print_alphabet();
}
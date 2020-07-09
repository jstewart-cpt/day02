void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
    char alphabet_z='z';
    while (alphabet_z>='a')
    {
        ft_putchar(alphabet_z);
        alphabet_z--;
    }
}

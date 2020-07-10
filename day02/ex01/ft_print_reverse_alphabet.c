#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_print_reverse_alphabet(void)
{
    char alphabet_z='z';
    while (alphabet_z>='a')
    {
        ft_putchar(alphabet_z);
        alphabet_z--;
    }
}

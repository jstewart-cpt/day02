#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{
    char alphabet_letter_a;
    char alphabet_letter_z;
   // This enables the alphabet to be dislayed.
    alphabet_letter_a= 'a';
    alphabet_letter_z= 'z';
    while(alphabet_letter_a<=alphabet_letter_z)
    {
        ft_putchar(alphabet_letter_a);
        alphabet_letter_a++;
    }
}
int main(void)
{
    ft_print_alphabet();
    return(0);
}
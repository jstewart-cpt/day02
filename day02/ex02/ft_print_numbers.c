void ft_putchar(char c);

void ft_print_numbers(void)
{
    char number='0';
    char end_number='9';
    while(number<=end_number)
    {
        ft_putchar(number);
        number++;
    }
}
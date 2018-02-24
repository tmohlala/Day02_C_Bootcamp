void ft_putchar(char c);

void ft_putnbr(int num) {
    if(num < 0) {
        ft_putchar('-');
        num *= -1;
    }
    if(num > 9) {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else {
        ft_putchar(num + '0');
    }
}
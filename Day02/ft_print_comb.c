void ft_putchar(char c);

void ft_print_comb(void) {
    char a = '0';
    char b;
    char c;

    while(a <= '7') {
        b = a + 1;
        while(b <= '8') {
            c = b + 1;
            while(c <= '9') {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(' ');
                c++;
            }
            b++;
        }
        a++;
    }
}
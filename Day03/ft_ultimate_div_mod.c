void ft_ultimate_div(int *a, int *b) {
    int div = *a / *b;
    int mod = *a/ *b;
    *a = div;
    *b = mod;
}
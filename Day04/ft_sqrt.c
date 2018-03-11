int ft_sqrt(int nb) {
    int x = nb;
    int y = 1;

    while(x > y) {
        x = (x + y) / 2;
        y = nb / x;
    }
    return x;
}
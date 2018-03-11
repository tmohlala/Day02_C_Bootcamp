int ft_iterative_power(int nb, int power) {
    int res = nb;

    while(power > 1) {
        res *= nb;
        power--;
    }
    return res;
}
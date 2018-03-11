void ft_sort_integer_table(int *tab, int size) {
    int i = 1;

    while(i < size) {
        if(tab[i] < tab[i - 1]) {
                while((tab[i] < tab[i -1]) && (i - 1) >= 0) {
                tab[i] = tab[i - 1] + tab[i];
                tab[i - 1] = tab[i] - tab[i - 1];
                tab[i] = tab[i] - tab[i - 1];
                i--;
            }
        }
        i++;
    }
}
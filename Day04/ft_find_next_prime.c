int ft_is_prime(int nb) {
    int i = 5;

    if(nb <= 3) {
        return nb > 1;
    }
    else if((nb % 2) == 0 || (nb % 3) == 0) {
        return 0;
    }
    else {
        while((i * i) < nb) {
            if((nb % i) == 0 || (nb % (i + 2)) == 0) {
                return 0;
            }
            i += 6;
        }
        return 1;
    }
}

int ft_find_next_prime(int nb) {
    if(nb <= 2) {
        return 2;
    }
    while(1) {
        if(ft_is_prime(nb)) {
            return nb;
        }
        nb++;
    }
}
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    char c = 'z';
    
    while(c >= 'a') {
        ft_putchar(c);
        c--;
    }
}
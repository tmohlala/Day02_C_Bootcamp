#include <unistd.h>

int main() {
    write(1, "abcdefghijklmnopqrstuvwxyz", 27);
    return 0;
}
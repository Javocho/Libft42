#include <unistd.h>

void ft_putnbr_fd(int n, int fd) {
    if (n < 0) {
        write(fd, "-", 1);
        n *= -1;
    }
    if (n > 0) {
        ft_putnbr_fd(n/10, fd);
        char c = n%10 + '0';
        write(fd, &c, 1);
    }
}
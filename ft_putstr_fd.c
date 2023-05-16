#include <unistd.h>

//hay que implementar ft_strlen??

void ft_putstr_fd(char *s, int fd) {
    int n = ft_strlen(s);
    write(fd, &s, n);
}
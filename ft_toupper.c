int ft_toupeer(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
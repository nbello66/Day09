unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (!(base %2))
		base = base / 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}

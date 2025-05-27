#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}
int	main(void)
{
	ft_putnbr_fd(-12345, 1);
	write(1, "\n", 1);
	return (0);
}
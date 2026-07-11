#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	if (x <= 0 || y <= 0)
		return ;
	current_y = 0;
	while (current_y++ < y)
	{
		current_x = 0;
		while (current_x++ < x)
		{
			if ((current_x == 1 && current_y == 1)
				|| (current_x == x && current_y == 1)
				|| (current_x == 1 && current_y == y)
				|| (current_x == x && current_y == y))
				write(1, "o", 1);
			else if (current_x == 1 || current_x == x)
				write(1, "|", 1);
			else if (current_y == 1 || current_y == y)
				write(1, "-", 1);
			else
				write(1, " ", 1);
		}
		ft_putchar('\n');
	}
}

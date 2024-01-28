/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyeniay <uyeniay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:57:42 by uyeniay           #+#    #+#             */
/*   Updated: 2024/01/28 20:33:12 by uyeniay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = x;
	b = y;
	y = 1;
	if ((a <= 0) || (b <= 0))
		write (1, "fku", 3);
	while (y <= b)
	{
		x = 1;
		while (x <= a)
		{
			if ((x < 2 && y < 2) || (x == a && y == b && y > 1 && x > 1))
				ft_putchar('/');
			else if (x > 1 && x < a && y > 1 && y < b)
				ft_putchar(' ');
			else if ((x == 1 && y == b) || (x == a && y == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

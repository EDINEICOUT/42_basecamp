/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:15:00 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/30 23:55:09 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb2(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
		write(1, ", ", 2);
}

void	ft_last_comb(int a, int b, int c, int d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			print_comb2(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			ft_last_comb(a, b, c, d);
			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:43:48 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 20:37:03 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, str[i], 1);
	i++;
}

int	main(void)

{
	char teste[] = "teste";
	ft_putstr(teste);
	return(0);
}

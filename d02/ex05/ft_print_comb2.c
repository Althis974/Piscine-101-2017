/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:16:57 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/05 09:57:00 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_print(int n, int m)
{	
	ft_putchar( n / 10 + '0' );
	ft_putchar( n % 10 + '0' );
	ft_putchar( ' ' );
	ft_putchar( m / 10 + '0' );
	ft_putchar( m % 10 + '0' );
	if (n != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void	ft_print_comb2(void)
{
	int		n;
	int		m;
	n = 0;
	while (n < 100)
	{
		m = n + 1;
		while ( m < 100)
		{
			ft_print(n,m);
				m++;
		}
	n++;
	}
}

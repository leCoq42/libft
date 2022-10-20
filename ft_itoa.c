/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 18:00:10 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/20 21:13:12 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		sign;
	size_t	numlen;
	
	sign = 0;
	numlen = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
		numlen++;
	}
	tmp = n;
	while (tmp / 10)
	{
		numlen++;
		tmp /= 10;
	}
	if (tmp >= 0)
		numlen++;
	str = (char *)malloc((numlen) * sizeof(char));
	if (!str)
		return (0);
	while (numlen-- > 1)
	{
		str[numlen] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign)
		str[numlen] = 45;
	else
		str[numlen] = n + 48;
	return (str);
}

// #include <stdio.h>
// int	main (void)
// {
// 	int	x = -123;
// 	printf("%s\n", ft_itoa(x));
// }

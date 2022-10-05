/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:24:32 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/05 14:42:21 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*# include	<stdio.h>
# include	<ctype.h>
int	main(void)
{
	char c = '!';

	printf("ft: %i\n", ft_isalnum(c));
	printf("test: %i", isalnum(c));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: martin <martin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 12:44:30 by martin        #+#    #+#                 */
/*   Updated: 2022/10/09 12:57:09 by martin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%c\n", ft_toupper(argv[1][0]));
	return(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: martin <martin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 12:44:30 by martin        #+#    #+#                 */
/*   Updated: 2022/10/10 13:56:00 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_toupper(int c)
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
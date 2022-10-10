/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: martin <martin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 14:23:02 by martin        #+#    #+#                 */
/*   Updated: 2022/10/09 14:30:23 by martin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%c\n", ft_tolower(argv[1][0]));
	return(0);
}

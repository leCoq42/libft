/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: martin <martin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 15:08:46 by martin        #+#    #+#                 */
/*   Updated: 2022/10/10 13:53:33 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		*s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}

/* #include	<stdio.h>
#include	<string.h>
int	main(void)
{
	char	*str =  "In deze zin wil ik '0' vinden!";
	char	to_find = '0';

	printf("strchr: %s\n", strchr(str, to_find));
	printf("ft_strchr: %s\n", ft_strchr(str, to_find));
} */
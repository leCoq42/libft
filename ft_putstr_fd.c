/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:51:21 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/06 15:50:24 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"headers.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/* int	main(void)
{
	char *str = "Dit is een test.";
	ft_putstr_fd(str, 1);
} */
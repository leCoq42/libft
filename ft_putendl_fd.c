/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 13:20:26 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/21 13:27:01 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	if (write(fd, s, ft_strlen(s)) == -1)
		return ;
	if (write(fd, "\n", 1) == -1)
		return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   headers.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:57:19 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/07 16:18:45 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

unsigned long	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
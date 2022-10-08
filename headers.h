/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   headers.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:57:19 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/08 16:12:49 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

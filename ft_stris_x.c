/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stris_x.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 13:23:19 by mhaan         #+#    #+#                 */
/*   Updated: 2023/06/21 13:23:24 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_stris_x(char *s, int (*f)(int))
{
	if (!s || !f)
		return (0);
	while (*s)
	{
		if (f(*s) == 0)
			return (0);
		s++;
	}
	return (1);
}
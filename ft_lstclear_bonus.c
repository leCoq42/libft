/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 16:29:11 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/24 18:25:40 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while ((*lst)->next)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			lst = &tmp;
		}
	}
}

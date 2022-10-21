/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:47:39 by mhaan         #+#    #+#                 */
/*   Updated: 2022/10/21 16:59:02 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;
	
	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}
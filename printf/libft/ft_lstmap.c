/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:28:49 by tzizi             #+#    #+#             */
/*   Updated: 2024/05/30 15:28:51 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;
	void	*c_tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	res = NULL;
	tmp = NULL;
	c_tmp = NULL;
	while (lst != NULL)
	{
		c_tmp = f(lst->content);
		tmp = ft_lstnew(c_tmp);
		if (tmp == NULL)
		{
			del(c_tmp);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/15 17:16:49 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/15 17:27:25 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	i = 0;
	tmp = lst;
	while(tmp != NULL)
	{
		tmp = lst->next;
		i++;
	}
	return(tmp);
}
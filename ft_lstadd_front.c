/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supersko <ndionis@student.42mulhouse.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:36:39 by supersko          #+#    #+#             */
/*   Updated: 2022/03/04 11:38:34 by supersko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

void	ft_lsadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:25:27 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/17 17:57:16 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define TRUE (1)
# define FALSE (0)
# define ERROR (-1)
# define DONE (2)
# define INTNEGLIM (-2147483648)
# define INTPOSLIM (2147483647)


/*
 *	ft_lstswap.c
 */

void	ft_lstswap(t_list **src);

/*
 *	ft_lstpush.c
 */

void	ft_lstpush(t_list **dst, t_list **src);
void	ft_lstpushend(t_list **dst, t_list **src);

/*
 *	ft_lstrotate.c
 */

void	ft_lstrotate(t_list **src);

/*
 *	ft_lstrevrotate.c
 */

void	ft_lstrevrotate(t_list **src);
#endif

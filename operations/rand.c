/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:08:01 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/09 15:14:57 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int		main(void)
{
	int	num;

	srand((unsigned int) time(0) + getpid());
	printf("\nbruh!\n");
	num = rand();

	printf ("%d\n", num);

	return EXIT_SUCCESS;
}

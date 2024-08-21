/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:32:29 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 10:32:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/server.h"

int     main(void)
{
        char    *msg = "nothing to display\n";
        signal(SIGINT, sighandler);
        printf("pid : %d\n", getpid());
        while (1)
        {
            continue ;
        }
        return (0);
}
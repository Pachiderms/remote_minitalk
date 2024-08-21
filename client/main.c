/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:20:03 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 10:20:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/client.h"

void    sig_handler(int signum)
{
    ft_printf("ouais\n");
}
int     main(void)
{
    char    *msg;
    char    instructions[1024];
    pid_t     pid;
    char    **buffer;

    msg = NULL;
    buffer = NULL;
    pid = 0;
    signal(SIGINT, sig_handler);
    while (1)
    {
        scanf("%s %d", &instructions, &pid);
        if (ft_strncmp(instructions, "exit", ft_strlen(instructions)) == 0)
        {
                raise (SIGTERM);
        }
        printf("%s %d", instructions, pid);
        kill(pid, 2);
    }
    return (0);
}
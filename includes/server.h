/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:32:55 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 10:32:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERVER_H
#define SERVER_H

#define _XOPEN_SOURCE 700

#include <assert.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../printf/src/ft_printf.h"

void    sighandler(int signum);

#endif
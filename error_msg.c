/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonslee <yoonslee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:34:50 by yoonslee          #+#    #+#             */
/*   Updated: 2023/03/08 13:56:22 by yoonslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_msg(t_pipex *pipex, int error_code)
{
	if (error_code == 2)
		ft_putstr_fd("Error; didn't find path (HOW IS THIS POSSIBLE?)\n", 2);
	if (error_code == 3)
		ft_putstr_fd("Error; fork failed\n", 2);
	if (error_code == 4)
		ft_putstr_fd("Error; pipe allocation failed\n", 2);
	if (pipex)
		exit(error_code);
}

void	error_alloc(char *str)
{
	free(str);
	str = NULL;
}

void	error_alloc2(char **str)
{
	free_str_array(str);
}

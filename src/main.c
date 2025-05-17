/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:52:00 by okraus            #+#    #+#             */
/*   Updated: 2025/05/17 15:54:20 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	shell(int argc, char *argv[], char *envp[]);

int	main(int argc, char *argv[], char *envp[])
{
	int code;

	code = 0;
	code = shell(argc, argv, envp);
	return code;
}

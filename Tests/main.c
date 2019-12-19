/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <mojacque@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 21:19:15 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 21:13:13 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../Functions/get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
	int				fd;
	char			*line;
	int				result;
	unsigned int	count_line;
	(void)			argc;

	fd = open(argv[1], O_RDONLY);
	count_line = 1;
	while ((result = get_next_line(fd, &line)) > 0)
	{
		printf("STATUS : %i \n", result);
		printf("RETURN : %s\n\n", line);
		free(line);
		printf("---- \n\n");
		count_line++;
	}

	if (result < 0)
		{
			printf("RETURN ERROR\n");
			return (0);
		}
	printf("STATUS : %i \n", result);
	printf("RETURN : %s \n\n", line);
	free(line);
	printf("---- \n\n");
	printf("LIGNE LU : %i \n\n", count_line);
	return (0);
}

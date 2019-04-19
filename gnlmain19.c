/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:50:23 by wtorwold          #+#    #+#             */
/*   Updated: 2019/03/25 22:09:15 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "libft/includes/libft.h"

int get_next_line(int fd, char **p);

//int main()
int main (int argc, char **argv)
{	
	
	int	fd;
	char	*p;
	int	result;
	result = 0;	

	
//	p = (char *)malloc(sizeof(char));
	if (argc != 2)
	{
		printf ("wrong name of file");
		return(-1);
	}

	fd = open (argv[1], O_RDONLY);
//	fd = open ("test", O_RDONLY);
	if (fd == -1)
	{
		write (1, "Open file failed", 17);
		return (0);
	}
	int i = 7;
	while (i > 0)
	{
	result = get_next_line(fd, &p);
	printf ("%s	%d\n",p, result);
	free(p);
	p = NULL;
//	p = (char *)malloc(sizeof(char));
	i--;
	}
	free(p);
//	free(argv[1]);
}

/*int main(int argc, char *argv)
{
	if (argc != 2)
		return(1);

}*/


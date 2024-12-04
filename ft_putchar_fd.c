#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}

/* 
0 <= fd <= 1024
0	Represents standard input.
1	Represents standard output.
2	Represents standard error.
3~9	Writes whitin a specific file.
10 >>	writes whitin several files.
*/

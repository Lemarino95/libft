//The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by
// writing zeros (bytes containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
		c[i++] = '\0';
}

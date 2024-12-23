//The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of
//       c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	if (c == 0)
		return ((void *)(s + i));
	return (NULL);
}

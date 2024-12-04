#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	if (chr == 0)
		return ((char *)(s + i));
	return (NULL);
}

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	i = 0;
	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && ((i + j) < len))
		{
			j++;
		}
		if (j == ft_strlen(little))
			return (&b[i]);
		i++;
	}
	return (NULL);
}

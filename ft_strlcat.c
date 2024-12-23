// The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// Returns the total length of the string they tried to create. For strlcat() that means the initial length of dst plus the length of src.
// 	Note, however, that if strlcat() traverses size characters without finding a NUL,
// 	the length of the string is considered to be size and the destination string will not be NULL-terminated.

	
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dl >= size || size == 0)
		return (size + sl);
	while (src[i] && (dl + i + 1) < size)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}

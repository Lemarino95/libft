 // The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer
 //       to the allocated memory.  The memory is set to zero.  If nmemb or size is  0,  then  calloc()  returns  either
 //       NULL,  or  a  unique  pointer value that can later be successfully passed to free().  If the multiplication of
 //       nmemb and size would result in integer overflow, then calloc() returns an  error.

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	str = malloc((nmemb * size));
	if (!str)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}

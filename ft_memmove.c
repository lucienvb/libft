#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	if (!dst && !src)
		return (0);
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
			dest[len] = source[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

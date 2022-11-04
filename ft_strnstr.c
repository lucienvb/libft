#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lne;

	if (!haystack && !needle)
		return (NULL);
	i = 0;
	lne = ft_strlen(needle);
	if (lne == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < lne && i + j < len)
			j++;
		if (j == lne)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

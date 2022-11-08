#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*dup;
	char	*temp;
	int		strsize;

	strsize = ft_strlen(s1);
	dup = malloc((strsize + 1) * sizeof(char));
	if (!dup)
	{
		free (dup);
		return (NULL);
	}
	temp = dup;
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	dup[strsize] = '\0';
	return (dup);
}

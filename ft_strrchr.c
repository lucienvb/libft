char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = 0;
	while (1)
	{
		if (*s == (char)c)
			p = s;
		if (!*s)
			return ((char *)p);
		s++;
	}
}	

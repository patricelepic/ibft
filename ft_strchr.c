char * ft_strchr(const char *s, int c)
{
	char * p;

	p = s;
	while (*p != '\0' && p != c)
		p++;
	if (*p == c)
		return (p);
	return (0);
}
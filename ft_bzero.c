void 	ft_bzero(void *s, size_t n)
{	
	size_t i;
	char *p_char;

	i = 0;
	p_char = (char *)s;
	while (i < n)
		p_char[i++] = '\0';
}
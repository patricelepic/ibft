void 	*ft_memset(void *b, int c, size_t len)
{
	unsigned char * ZoneMemoire;

	if (b == NULL)
		return (NULL);
	ZoneMemoire = (unsigned char *)b;
	while (len)
	{
		*ZoneMemoire = c;
		ZoneMemoire++;
		len--;
	}
	return(b);
}
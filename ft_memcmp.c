int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		retour;

	retour = 0;
	i = 0;
	while (i < n)
	{
		retour = ((char *)s1)[i] - ((char *)s2)[i];
		i++;
	}
	return (retour);
}
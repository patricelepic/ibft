size_t ft_strlcat (char * s1, const char * s2, size_t size)
{
	size_t i;
	size_t j;
	size_t l1;
	size_t l2;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	l1 = i;
	while (s2[j])
		j++;
	l2 = j;
	j = 0;
	while (i + 1 < size && j < l2)
		s1[i++] = s2[j++];
	if (size <= l1)
		return(size + l2);
	s1[i] = '\0';
	return(l1 + l2);
}
#include "libft.h"

void *memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char*)src;
	d = (char*)dst;
	while (s[i] != c && i < n)
	{
		d[i] = s[i];
		i++;
	}
	if (i == n)
		return(NULL);
	d[i] = c;
	return (d + i + 1);
}
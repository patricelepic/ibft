#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	//while (n)
	//{
		while (i < n)
		{
			if (*str == (unsigned char)c)
				return ((void*)str);
			i++;
			str++;
		}
	//}
	return (NULL);
}
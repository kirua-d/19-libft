#include "libft.h"

int main()
{
	char *str = "i just want this part #############";
	size_t size = 20;

	printf("%s\n", ft_substr(str, size, 20));
	return(0);
}

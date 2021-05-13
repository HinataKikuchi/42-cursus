#include "../../include/cub3d.h"

void	safe_free(void *ptr)
{
	free(ptr);
	ptr = NULL;
}

int	check_row(char **s, int n)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i != n)
		return (0);
}

void	free_double_pointer(char **s)
{
	int i;

	i = 0;
	while (s[i])
		safe_free(s[i++]);
	free(s);
	s = NULL;
}
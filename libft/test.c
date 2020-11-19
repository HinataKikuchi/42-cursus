#include "libft.h"
#include <string.h>
#include <stdio.h>

int main( void )
{
    char **ans;
    int i;

    ans = (char **)malloc(3 * sizeof(char*));
    if(!ans)
        return 0;
    for (i = 0 ; i < 3 ; i++)
    {
        *(ans + i) = (char *)malloc(4 * sizeof(char));
		if (*(ans + i) == NULL)
		{
            while (i > 0)
            {
                free(*(ans +i));
                i--;
            }
			return (0);
		}
    }
    ans = ft_split("abc,def,ghi", ',');
    for (i = 0 ; i < 3 ; i++)
    {
        printf("%s\n",ans[i]);
    }
    return 0;
}
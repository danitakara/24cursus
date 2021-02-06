#include <stdio.h>
#include <string.h>

//int		ft_strlen(char *str);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int        main(void)
{
   /* char str[30] = "oi";
    int oi;
    oi = ft_strlen(str);
    printf("%d", oi); */

    char a[] = "to bege!";
    char b[] = "to bege!";
    int nb = 2;

    int k = ft_strncmp(a, b, nb);
    printf("%d\n", k);
    return (0);
}




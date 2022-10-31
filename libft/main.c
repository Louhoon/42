/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 11:21:54 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 12:14:09 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("\n");
    printf("BZERO\n\n");

    	char str[] = "hello dhehes";
	printf("\nBefore ft_bzero: %s\n", str);
	ft_bzero(str, sizeof(char));
	printf("\nAfter ft_bzero: %s\n\n", str);

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("ISALNUM\n\n");

    char c = '1';
	if(ft_isalnum(c) != 0)
	{
		printf("%c is an alphanum character\n", c); 
	}
	else
	{
		printf("%c is not an alphanum character\n\n", c);
	}

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("ISALPHA\n\n");

     char d = 'd';
	 if(ft_isalpha(d))
	 {
		 printf("%c is an alphabetical character\n", d); 
	 }
	 else
	 {
		printf("%c is not an alphabetical character\n\n", d);
	 }

     printf("\n");
     printf("------------------------------------\n");
     printf("------------------------------------\n");
     printf("\n");

    printf("ISASCII\n\n");

    	unsigned char e = '2';
	if(ft_isascii(e) != 0)
	{
		printf("%c is an ascii character\n", e); 
	}
	else
	{
		printf("%c is not an ascii character\n\n", e);
	}

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("ISDIGIT\n\n");

    	char f = 'T';
	if(ft_isdigit(f) != 0)
	{
	   printf("%c is a digit character\n", f); 
	}
	else
	{
		  printf("%c is not a digit character\n\n", f);
	}

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("ISPRINT\n\n");

    		char g = '\0';
	if(ft_isprint(g) != 0)
	{
	   printf("%c is a printable character\n", g); 
	}
	else
	{
		  printf("%c is not a printable character\n\n", g);
	}

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("MEMSET\n\n");

    {
    char h[50] = "Hello world, i made it through the piscine";
    printf("\nBefore ft_memset: %s\n", h);
    ft_memset(h + 13, '.', 5*sizeof(char));
    printf("\nAfter ft_memset: %s\n", h);
    }
    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("STRLEN\n\n");

    printf("%zu\n", ft_strlen("hello"));

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");

    printf("MEMCPY\n\n");

    char src[] = "abcdefghijklmnopqrstuvwyz";
	char dst[50];

	ft_memcpy(dst, src, sizeof(char) * 50);
	printf("src : %s\n", src);
	printf("dest : %s\n", dst);

    printf("\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("\n");
}
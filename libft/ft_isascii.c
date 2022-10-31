/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:14:46 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:14:46 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main(void)
{
		unsigned char c = '«';
	if(ft_isascii(c) != 0)
	{
	   printf("%c is an ascii character", c); 
	}
	else
	{
		  printf("%c is not an ascii character", c);
	}
}*/
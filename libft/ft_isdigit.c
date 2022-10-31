/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:14:56 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:14:56 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

/*int main(void)
{
		char c = 'T';
	if(ft_isdigit(c) != 0)
	{
	   printf("%c is a digit character", c); 
	}
	else
	{
		  printf("%c is not a digit character", c);
	}
}*/
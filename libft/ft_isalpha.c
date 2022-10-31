/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:14:32 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:14:32 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main(void)
// {
// 	 char c = 'd';
// 	 if(ft_isalpha(c) != 0)
// 	 {
// 		 printf("%c is an alphabetical character", c); 
// 	 }
// 	 else
// 	 {
// 			 printf("%c is not an alphabetical character", c);
// 	 }
// }
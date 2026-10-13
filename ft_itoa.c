/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/12 23:27:15 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/13 18:05:43 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tell_len(int n)
{
	size_t	num_len;

	num_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num_len++;
		n = n * -1;
	}
	while (n != 0)
	{
		num_len++;
		n = n / 10;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	char	*store;
	size_t	len;
	int		sign;

	len = tell_len(n);
	store = malloc((len + 1) * sizeof(char));
	if (store == NULL)
		return (NULL);
	store[len] = '\0';
	if (n == 0)
		return (store[0] = '0', store);
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n > 0)
	{
		store[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
		if (sign == -1)
			store[0] = '-';
	}
	return (store);
}
// int main(void)
// {
// 	int n = -1244444;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }
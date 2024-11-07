/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:39:39 by hboudar           #+#    #+#             */
/*   Updated: 2024/11/07 10:59:39 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*s_p;
	size_t			i;

	i = 0;
	s_p = (unsigned char *)s;
	while (len > i)
	{
		s_p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main()
// {
//     char    *str =  "S3IB 3LK HADSHI";
//     void    *ptr =  NULL;
//     long    add  =  (long)str;
    
//     for (int i = 0; i < 8; i++)
//     {
//         memset((char *)&ptr + i, add % 256, 1);
//         add /= 256;
//     }
//     printf("%s\n", (char *)ptr);
// }


// int main() {
//     int arr[] = {42, 1337, 2023, 4096, 54, 6548, 58};  // Example integer array
//     void *ptr = NULL;
//     long add = (long)arr;  // Store the address of arr in a long

//     for (int i = 0; i < 8; i++) {
//         memset((char *)&ptr + i, add % 256, 1);
//         add /= 256;
//     }

//     // Use ptr as an int pointer and print the values
//     int *intPtr = (int *)ptr;
//     for (int i = 0; i < 7; i++) {
//         printf("%d ", intPtr[i]);
//     }
//     return 0;
// }

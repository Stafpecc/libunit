/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:53:35 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 17:40:43 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strjoin_bigger_test(void)
{
	char	*result;

	result = ft_strjoin("Non quas velit qui amet obcaecati non ullam minima eos temporibus molestiae \
non assumenda blanditiis aut numquam deserunt! Eos dolorem blanditiis est autem fuga in perferendis \
facilis At deserunt iste ut rerum similique. Eum veritatis voluptatum At voluptas sint sit dignissimos \
reprehenderit nam impedit perferendis ut eligendi nisi ut rerum voluptates id consequatur adipisci. \
Ad eius facilis aut facere perspiciatis aut tempora exercitationem in iure velit non consectetur \
beatae.lo", "33 molestias rerum eos facilis aliquam ut illum quisquam sed maiores repellat quo \
dignissimos nihil vel laudantium laudantium est consequuntur asperiores. Ad voluptas perferendis \
nam expedita voluptate ut veritatis libero ab quaerat consequatur et soluta officiis vel voluptatem \
deleniti! Est corrupti omnis rem impedit consequatur vel inventore impedit. Ut repellat amet eos \
repudiandae tempore ut rerum sunt et consequatur fugit sit quis similique et maxime galisum hic \
perspiciatis magni?");
	if (result && ft_strcmp(result, "Non quas velit qui amet obcaecati non ullam minima eos temporibus \
molestiaenon assumenda blanditiis aut numquam deserunt! Eos dolorem blanditiis est autem fuga \
in perferendisfacilis At deserunt iste ut rerum similique. Eum veritatis voluptatum At voluptas \
sint sit dignissimosreprehenderit nam impedit perferendis ut eligendi nisi ut rerum voluptates \
id consequatur adipisci.Ad eius facilis aut facere perspiciatis aut tempora exercitationem in \
iure velit non consecteturbeatae.lo33 molestias rerum eos facilis aliquam ut illum quisquam \
sed maiores repellat quodignissimos nihil vel laudantium laudantium est consequuntur asperiores. \
Ad voluptas perferendisnam expedita voluptate ut veritatis libero ab quaerat consequatur et soluta \
officiis vel voluptatemdeleniti! Est corrupti omnis rem impedit consequatur vel inventore impedit. \
Ut repellat amet eosrepudiandae tempore ut rerum sunt et consequatur fugit sit quis similique et \
maxime galisum hicperspiciatis magni?") == 0)
	{
		free(result);
		return (0);
	}
	else
	{
		free(result);
		return (-1);
	}
}

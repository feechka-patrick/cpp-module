/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:59:49 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 13:08:35 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		Karen karen;
		int i = 0;
		while (argv[++i])
		{
			karen.complain(argv[i]);
		}
	}
}
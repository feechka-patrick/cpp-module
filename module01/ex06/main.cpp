/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:59:49 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 15:15:40 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Karen karen;
		karen.complain(argv[1]);
	}
}
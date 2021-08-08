/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:34:11 by nmisfit           #+#    #+#             */
/*   Updated: 2021/08/04 20:00:54 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "iomanip"

# define MAX_SIZE 8

class PhoneBook
{
	private:
		Contact	contacts[MAX_SIZE];
		int		index;
	public:
		PhoneBook(void);
		void	add(void);
		void	search(void);
};

#endif
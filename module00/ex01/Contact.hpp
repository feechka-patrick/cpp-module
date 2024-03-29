/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:27:15 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/13 18:48:44 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define EMPTY 0
# define NOT_EMPTY 1

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int			status;

	public:
		int getStatus();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		
		Contact(void);
		~Contact();
		void fill_contact(void);
};

#endif
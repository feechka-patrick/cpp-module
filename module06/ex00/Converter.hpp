#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <stdlib.h>

class Converter
{
	private:
		const std::string lit;
		int type;

		enum Type {
			TypeChar,
			TypeInt,
			TypeFloat,
			TypeDouble,
			TypeInvalid
		};

		bool checkInt(std::string str);
		bool checkFloat(std::string str);
		bool checkDouble(std::string str);
		int bordervalues(std::string value) const;
		std::string getBorderValue(std::string value, int type) const;

		class LiteralInvalidException: public std::exception {};
	public:
		Converter(std::string _lit);
		Converter(const Converter &obj);
		Converter& operator= (const Converter& obj);

		std::string toChar() const;
		std::string toInt() const;
		std::string toFloat() const;
		std::string toDouble() const;
		~Converter();
}; 

#endif

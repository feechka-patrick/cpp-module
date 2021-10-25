# include "Converter.hpp"

bool _isdigit(char c)
{
	if (c < 58 && c > 47)
		return (true);
	return (false);
}

int Converter::bordervalues(std::string value) const
{
	if (value == "-inff" || value == "+inff" || value == "nanf")
		return (TypeFloat);
	if (value == "-inf" || value == "+inf" || value == "nan")
		return (TypeDouble);
	return(0);
}

bool Converter::checkInt(const std::string str)
{
	int i = 0;

	if (!_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
		return (false);
	if (str[i] == '-' || str[i] == '+') i++;
	for (; i < str.size(); i++)
	{
		if (!_isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool Converter::checkFloat(std::string str)
{
	int i = 0;
	bool numcount = false;

	if ((!_isdigit(str[i]) && str[i] != '-' 
		&& str[i] != '+') || !str.find('.') || !str.find('f'))
		return (false);
	if (str[i] == '-' || str[i] == '+') i++;
	if (_isdigit(str[i])) numcount = true;
	for ( ; i < str.size() && _isdigit(str[i]); i++) ;
	if (i == str.size() || str[i] != '.')
		return (false);
	if (_isdigit(str[++i])) numcount = true;
	for (; i < str.size() && _isdigit(str[i]); i++) ;
	if (i != str.size() - 1 || str[i] != 'f' || !numcount)
		return (false);
	return (true);
}

bool Converter::checkDouble(std::string str)
{
	int i = 0;
	bool numcount = false;

	if ((!_isdigit(str[i]) && str[i] != '-' 
		&& str[i] != '+') || !str.find('.'))
		return (false);
	if (str[i] == '-' || str[i] == '+') i++;
	if (_isdigit(str[i])) numcount = true;
	for ( ; i < str.size() && _isdigit(str[i]); i++) ;
	if (i == str.size() || str[i] != '.')
		return (false);
	if (_isdigit(str[++i])) numcount = true;
	for (; i < str.size() && _isdigit(str[i]); i++) ;
	if (i != str.size() || !numcount)
		return (false);
	return (true);
}

Converter::Converter(std::string _lit) 
	: lit(_lit), type(TypeInvalid)
{
	if (lit.size() == 1 && !_isdigit(lit[0]))
	{
		type = TypeChar;
		return ;
	}
	type = checkInt(lit) ? TypeInt : type;
	type = checkDouble(lit) ? TypeDouble : type;
	type = checkFloat(lit) ? TypeFloat : type;

	if (lit == "-inff" || lit == "+inff" || lit == "nanf")
		type = TypeFloat;
	if (lit == "-inf" || lit == "+inf" || lit == "nan")
		type = TypeDouble;
	if (type == TypeInvalid)
		throw Converter::LiteralInvalidException();
}

std::string Converter::toChar() const
{
	std::ostringstream os;

	if (type == TypeChar)
	{
		if (lit[0] > 32 && lit[0] < 127)
			return (lit);
		if (lit[0] >= 0 && lit[0] <= 127)
			return ("non displayable");
	}
	else if (bordervalues(lit) != 0)
		os << "impossible";
	else
	{
		int numchar = atoi(lit.c_str());
		if (numchar >= 0 && numchar <= 32)
			return ("non displayable");
		os << static_cast<char>(numchar);
	}

	return (os.str());
}

std::string Converter::toInt() const
{
	std::ostringstream os;

	if (bordervalues(lit) != 0)
		os << "impossible";
	else
		os << atoi(lit.c_str());;
	return (os.str());
}

std::string Converter::toFloat() const
{
	std::ostringstream os;

	if (bordervalues(lit) == TypeFloat)
		return (lit);
	if (bordervalues(lit) == TypeDouble)
		return (lit + "f");

	os << atof(lit.c_str());
	if ((os.str()).find('.') == std::string::npos)
		os << ".0";
	os << "f";
	return (os.str());
}

std::string Converter::toDouble() const
{
	std::ostringstream os;

	if (bordervalues(lit) == TypeFloat)
		return (lit.substr(lit.size() - 1));
	if (bordervalues(lit) == TypeDouble)
		return (lit);
	float fres = atof(lit.c_str());
	os << static_cast<double>(fres);
	if ((os.str()).find('.') == std::string::npos)
		os << ".0";
	return (os.str());
}

Converter::Converter(const Converter &obj)
	: lit(obj.lit), type(obj.type) {}

Converter& Converter::operator= (const Converter& obj) 
	{ return (*this); }

Converter::~Converter() {}

 

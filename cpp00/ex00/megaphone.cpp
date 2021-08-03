#include "iostream"

char	*word_to_upper(char *str)
{
	for(int i = 0; i < (int)strlen(str); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout << word_to_upper(argv[i]);
		std::cout << std::endl;
	}
}
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>
#include <cmath>

void	print(int i, float f, double d, char c)
{
	double dex;

	std::cout << "Int: ";
	if (d > 2146473647 || d < -2146473648 || isnan(d) || isinf(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "Float: ";
	if ((d < __FLT_MIN__ || d > __FLT_MAX__) && ((!isnan(f) && !isinf(f)) && f))
		std::cout << "impossible" << std::endl;
	else if (!modf(f, &dex) && !isnan(f) && !isinf(f))
		std::cout << std::setprecision(7) << f << ".0f" << std::endl;
	else
		std::cout << std::setprecision(7) << f <<  "f" << std::endl;
	std::cout << "Double: ";
	if (!modf(d, &dex) && !isnan(d) && !isinf(d))
		std::cout << std::setprecision(16) << d << ".0" << std::endl;
	else
		std::cout << std::setprecision(16) << d << std::endl;
	std::cout << "Char: ";
	if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "not displayable" << std::endl;
}

bool	isInt(std::string arg)
{
	if ((arg[0] != '-' && arg[0] != '+' && !isdigit(arg[0]))
		|| (((arg[0] == '-') || arg[0] == '+') && arg.length() == 1))
			return false;
	size_t i = 1;
	for ( ; i < arg.length() && isdigit(arg[i]); i++)
		continue ;
	if (i == arg.length())
		return true;
	else
		return false;
}

bool	isFloat(std::string arg)
{
	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf"))
		return true ;
	if (arg[0] != '-' && arg[0] != '+' && !isdigit(arg[0]))
		return false ;
	int f = 0, p = 0;
	for (size_t i = 1; i < arg.length(); i++)
	{
		if (arg[i] == '.')
			p++;
		if (arg[i] == 'f' && i == arg.length() - 1)
			f++;
		if (!isdigit(arg[i] && arg[i] != 'f' && arg[i] != '.'))
			return false ;
	}
	if (p == 1 && f == 1)
		return true ;
	else
		return false ;
}

bool	isDouble(std::string arg)
{
	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf"))
		return true ;
	if (arg[0] != '-' && arg[0] != '+' && !isdigit(arg[0]))
		return false ;
	int p = 0;
	for (size_t i = 1; i < arg.length(); i++)
	{
		if (arg[i] == '.')
			p++;
		if (!isdigit(arg[i] && arg[i] != '.'))
			return false ;
	}
	if (p == 1)
		return true ;
	else
		return false ;
}

bool	isStr(std::string arg)
{
	if (arg.length() == 1 && isprint(arg[0]))
		return true ;
	return false ;
}

int	getType(std::string str)
{
	if (isInt(str))
		return (0);
	else if (isFloat(str))
		return (1);
	else if (isDouble(str))
		return (2);
	else if (isStr(str))
		return (3);
	else
		return (4);
}

void	doChar(std::string arg)
{
	char c = 0;
	float f = 0;
	double d = 0;
	int i = 0;

	c = arg[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	std::cout << "CHAR" << std::endl;
	print(i, f, d, c);
}

void	doDouble(std::string arg)
{
	char c = 0;
	float f = 0;
	double d = 0;
	int i = 0;

	d = atof(arg.c_str());
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	c = static_cast<char>(d);
	std::cout << "DOUBLE" << std::endl;
	print(i, f, d, c);
}

void	doFloat(std::string arg)
{
	char c = 0;
	float f = 0;
	double d = 0;
	int i = 0;

	d = atof(arg.c_str());
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	c = static_cast<char>(d);
	std::cout << "FLOAT" << std::endl;
	print(i, f, d, c);
}

void	doInt(std::string arg)
{
	char c = 0;
	float f = 0;
	double d = 0;
	int i = 0;

	d = atof(arg.c_str());
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	c = static_cast<char>(d);
	std::cout << "INT" << std::endl;
	print(i, f, d, c);
}

void	doStuff(std::string arg)
{
	int i = getType(arg);
	switch (i)
	{
	case 0:
			doInt(arg);
			break ;
	case 1:
			doFloat(arg);
			break ;
	case 2:
			doDouble(arg);
			break ;
	case 3:
			doChar(arg);
			break ;
	case 4:
			std::cout << "Invalid input" << std::endl;
			break ;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
		doStuff(argv[1]);
	return (0);
}
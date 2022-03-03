#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>
#include <cmath>


bool	isInt(std::string arg)
{
	if (arg[0] != '-' && arg[0] != '+' && !isdigit(arg[0])
		|| ((arg[0] == '-') || arg[0] == '+') && arg.length() == 1)
			return false;
	int i = 1;
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
	for (int i = 1; i < arg.length(); i++)
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
	for (int i = 1; i < arg.length(); i++)
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
			doStr(arg);
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
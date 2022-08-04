#include "logger.h"

void lampscript::__private__::_changeColor(LS_COLORS background)
{
	if (background != LS_COLORS::DEFAULT)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), int(background));
	}
}

void LS_LOG(LS_COLORS color)
{
	lampscript::__private__::_changeColor(color);
}

#pragma once

#include <include.h>

enum class LS_COLORS
{
	DEFAULT = -1,
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	AQUA = 3,
	RED = 4,
	PURPLE = 5,
	YELLOW = 6,
	WHITE = 7,
	GREY = 8,
	LIGHT_BLUE = 9,
	LIGHT_GREEN = 10,
	LIGHT_AQUA = 11,
	LIGHT_RED = 12,
	LIGHT_PURPLE = 13,
	LIGHT_YELLOW = 14,
	BRIGHT_WHITE = 15
};

namespace lampscript
{
	namespace __private__
	{
		void _changeColor(LS_COLORS background);
	}
}

template<typename Argv>
void LS_LOG(Argv string);
void LS_LOG(LS_COLORS color);

template<typename ...Args>
void LS_LOG(LS_COLORS color, Args ...rest);
template<typename Argv, typename ...Args>
void LS_LOG(Argv string, Args ...rest);

template<typename Argv>
inline void LS_LOG(Argv string)
{
	std::cout << string << std::endl;
	lampscript::__private__::_changeColor(LS_COLORS::WHITE);
}

template<typename ...Args>
inline void LS_LOG(LS_COLORS color, Args ...rest)
{
	lampscript::__private__::_changeColor(color);
	LS_LOG(rest...);
}

template<typename Argv, typename ...Args>
inline void LS_LOG(Argv string, Args ...rest)
{
	std::cout << string;
	LS_LOG(rest...);
}

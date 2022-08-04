#pragma once
#include <include.h>

#define LS_VERSION "0.1"
#define LS_VERSION_STAGE "alpha"

namespace lampscript
{
	namespace __private__
	{
		class VERSION_CLASS
		{
		public:
			static std::string _getVersionName();
		};
	}
}

/* MACROS */
#define LS_VERSION_NAME lampscript::__private__::VERSION_CLASS::_getVersionName().c_str()

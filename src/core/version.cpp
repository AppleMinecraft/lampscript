#include "version.h"

std::string lampscript::__private__::VERSION_CLASS::_getVersionName()
{
    std::stringstream versionname("");
    versionname << "lampscript v" << LS_VERSION;
    if (LS_VERSION_STAGE != "stable")
        versionname << "-" << LS_VERSION_STAGE;
    return versionname.str();
}

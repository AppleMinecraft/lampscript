#include <include.h>

#define SUPER_DEBUG true

int main(int argc, char* argv[])
{
    int exitCode = ERRORCODE_SUCCESS;

    if (argc == 1) {
        LS_LOG(LS_COLORS::LIGHT_GREEN, LS_VERSION_NAME);
    }
    else {
        LS_LOG(LS_COLORS::LIGHT_RED, "[ARGUMENTERROR]: Invalid numbers of argument.");
        exitCode = ERRORCODE_INVALID_ARGUMENT;
    }

    exit(exitCode);
}
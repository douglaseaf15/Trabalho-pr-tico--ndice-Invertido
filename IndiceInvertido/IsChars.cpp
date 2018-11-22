#include "IsChars.h"

    IsChars::IsChars(const char* charsToRemove) : chars(charsToRemove) {

    };
    bool IsChars::operator()(char c)
    {
        for(const char* testChar = chars; *testChar != 0; ++testChar)
        {
            if(*testChar == c) { return true; }
        }
        return false;
    }

#pragma once

#include <iostream>
#include "IParsable.h"
#include "..\Entity\OneSpaceOnly.h"

class OneSpaceOnlyParser : public IParsable
{
public:
    IRule* parse(std::string data)
    {
        return new OneSpaceOnly(data);
    }

    std::string getType()
    {
        return "OneSpaceOnlyParser";
    }

};
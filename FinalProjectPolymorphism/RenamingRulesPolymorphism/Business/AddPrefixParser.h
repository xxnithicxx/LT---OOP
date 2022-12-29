#pragma once

#include <iostream>
#include "IParsable.h"
#include "..\Entity\AddPrefix.h"

class AddPrefixParser : public IParsable
{
public:
    IRule* parse(std::string data)
    {
        return new AddPrefix(data);
    }

    std::string getType()
    {
        return "AddPrefixParser";
    }
};

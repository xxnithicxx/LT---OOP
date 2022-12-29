#pragma once

#include <iostream>
#include "IParsable.h"
#include "..\Entity\Replace.h"

class ReplaceParser : public IParsable
{
public:
    IRule* parse(std::string data)
    {
        return new Replace(data);
    }

    std::string getType()
    {
        return "ReplaceParser";
    }
};
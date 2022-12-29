#pragma once

#include <iostream>
#include "IParsable.h"
#include "..\Entity\RemoveSpecialChars.h"

class RemoveSpecialCharsParser : public IParsable
{
public:
    IRule* parse(std::string data)
    {
        return new RemoveSpecialChars(data);
    }


    std::string getType()
    {
        return "RemoveSpecialCharsParser";
    }
};
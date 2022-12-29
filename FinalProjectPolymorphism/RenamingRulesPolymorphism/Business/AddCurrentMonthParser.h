#pragma once

#include <iostream>
#include "IParsable.h"
#include "..\Entity\AddCurrentMonth.h"

class AddCurrentMonthParser : public IParsable
{
public:
    IRule* parse(std::string data)
    {
        return new AddCurrentMonth(data);
    }

    std::string getType()
    {
        return "AddCurrentMonthParser";
    }

};
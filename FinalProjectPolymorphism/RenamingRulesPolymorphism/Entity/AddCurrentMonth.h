#pragma once

#include <iostream>
#include <sstream>
#include <ctime>
#include "..\Business\IRule.h"

class AddCurrentMonth : public IRule
{
public:
    AddCurrentMonth(std::string data)
    {
    }

    std::string rename(std::string filename)
    {
        std::stringstream ss;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        ss << 1 + ltm->tm_mon << " " << filename;
        return ss.str();
    }
};

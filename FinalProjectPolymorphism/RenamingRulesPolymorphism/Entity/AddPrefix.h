#pragma once

#include <iostream>
#include <sstream>
#include "..\Business\IRule.h"

class AddPrefix : public IRule
{
private:
    std::string data;

public:
    AddPrefix(std::string data)
    {
        this->data = data;
    }

    std::string rename(std::string filename)
    {
        std::stringstream ss;
        ss << data << " " << filename;
        return ss.str();
    }
};
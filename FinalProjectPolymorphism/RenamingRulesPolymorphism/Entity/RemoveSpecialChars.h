#pragma once

#include <iostream>
#include <regex>
#include "..\Business\IRule.h"

class RemoveSpecialChars : public IRule
{
private:
    std::string data;

public:
    RemoveSpecialChars(std::string data)
    {
        this->data = data;
    }

    std::string rename(std::string filename)
    {
        // 10 is the length of "blacklist="
        std::string blacklist = data.substr(10, data.length() - 10);
        std::regex pattern("[" + blacklist + "]");
        return std::regex_replace(filename, pattern, "");
    }
};
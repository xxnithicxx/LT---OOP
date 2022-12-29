#pragma once

#include "IParsable.h"
#include "RemoveSpecialCharsParser.h"
#include "OneSpaceOnlyParser.h"
#include "AddCurrentMonthParser.h"
#include "AddPrefixParser.h"
#include "ReplaceParser.h"
#include <iostream>
#include <vector>
using namespace std;

class ParserFactory
{
private:
    std::vector<IParsable *> parsers;

public:
    void registerWith(IParsable *parser)
    {
        parsers.push_back(parser);
    }

    IParsable *create(string type)
    {
        for (auto parser : parsers)
        {
            if (parser->getType().find(type) != string::npos)
            {
                return parser;
            }
        }
        return NULL;
    }
};
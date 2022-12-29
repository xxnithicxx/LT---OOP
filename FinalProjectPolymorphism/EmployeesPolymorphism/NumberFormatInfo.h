#pragma once

#include <iostream>
using namespace std;

class NumberFormatInfo
{
private:
    string _currencyDecimalSeparator = ".";
    string _currencySymbol = "d";

    // https://stackoverflow.com/questions/17459450/how-to-determine-currency-symbol-position-for-a-culture
    int _currencyPositive = 3;              // 0		1		2		3
    string _currencyPositiveFormat = "n $"; // "$n"		"n$"	"$ n"	  "n $"
public:
    string currencyDecimalSeparator()
    {
        return _currencyDecimalSeparator;
    }
    string currencySymbol()
    {
        return _currencySymbol;
    }
    int currencyPositive()
    {
        return _currencyPositive;
    }
    string currencyPositiveFormat()
    {
        return _currencyPositiveFormat;
    }
};
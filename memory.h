#ifndef MEMORY_H
#define MEMORY_H

#include <bits/stdc++.h>
using namespace std;

class Memory
{
private:
    map<string, int> data;
   int A, B, C, D, E, F;

public:
    Memory()
    {
        A = B = C = D = E = F = 0;
    }

    int HexDigitToDecimal(char temp)
    {
        if (isdigit(temp))
        {
            return int(temp - '0');
        }
        return (10 + (temp - 'A'));
    }

    void Update(string str, string value)
    {
        int val = HexDigitToDecimal(value[0]) * 16 + HexDigitToDecimal(value[1]);
        data[str] = val;
    }

    string get(string str)
    {
        int value = data[str];
        string just;
        int va = value / 16;
        if (va < 10)
        {
            just += ('0' + va);
        }
        else
        {
            va -= 10;
            just += ('A' + va);
        }
        va = value % 16;

        if (va < 10)
        {
            just += ('0' + va);
        }
        else
        {
            va -= 10;
            just += ('A' + va);
        }

        return just;
    }

    void PrintEntireMemory()
    {
        for (auto pos : data)
        {
            cout << "value at memory location " << pos.first<< " is as : " << get(pos.first) << endl;
        }
    }
};

#endif

#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <bits/stdc++.h>
using namespace std;
class Instruction
{
    // private:
public:
    string opcode;
    string operand;
    int type=1;

    Instruction(string line)
    {
        istringstream just(line);
        just >> opcode >> operand;

        if (operand.size() <= 1 || operand.size() == 3)
        {
            type = 1;
        }
        else if (operand.size() == 2)
        {
            type = 2;
        }
        else
        {
            type = 3;
        }
    }

    void print(){
        cout<<opcode<<" "<<operand<<" "<<type<<endl;
    }
};

#endif
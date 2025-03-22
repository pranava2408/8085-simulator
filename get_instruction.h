#include "instruction.h"
#include <bits/stdc++.h>

using namespace std;
#ifndef GETI_H
#define GETI_H

vector<Instruction> getInstructions(string filename)
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error: Could not open file " << filename << endl;
        exit(1); // Or handle the error as appropriate
    }

    vector<Instruction> program;
    string line;
    while (getline(file, line))
    {

        if (line.empty())
            continue;

        Instruction inst(line);
        program.push_back(inst);
    }
    return program;
}

#endif

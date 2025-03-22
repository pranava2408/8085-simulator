#include <bits/stdc++.h>
#include "memory.h"
#include "get_instruction.h"
using namespace std;
int main()
{
    Memory current;
    cout << "default values of memory locations is :00 H" << endl;

    cout << "Enter Memory Location , value to be updated as a pair and press 2 to stop\n";

    while (1)
    {
        string A, B;
        cin >> A;
        if (A == "2")
            break;
        cin >> B;
        current.Update(A, B);
    }

    // it completely about how can we execute the program

    vector<Instruction> Program = getInstructions("program.txt");

    for (auto pos : Program)
    {
        pos.print();
    }

    cout << "\nExecution Successful!!\nEnter Memory Location To Get the Updated Values Or press 2 to STOP\n";
    while (1)
    {
        string str;
        cin >> str;

        if (str == "2")
            break;

        cout << "value at " << str << " is " << current.get(str) << endl;
    }

    cout << "Press 3 to View the Entire Non-Zero Memory Locations Or press any other key to stop the program:";
    string temp;
    cin >> temp;
    if (temp == "3")
    {
        current.PrintEntireMemory();
    }
    cout << "\n program terminated !!!\n";
}

#include "Scanner.h"



void Scanner::GetNextToken()
{
    char*  curretToken = new char[1];
    while(fin.read(curretToken,1)> 0)
    {
        cout << curretToken ;
    }

}


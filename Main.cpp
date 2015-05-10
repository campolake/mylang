#include <iostream>

#include <Scanner.h>

using namespace std;

int main()
{
    Scanner * scanner  = new Scanner("d://main.b");
    scanner->GetNextToken();
    delete scanner;
    return 0;
}


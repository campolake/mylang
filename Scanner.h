#ifndef SCANNER_H
#define SCANNER_H

#include <iostream>
#include <fstream>

using namespace std;


class Scanner
{
private:
    string filename;
    int currentToken;
    ifstream fin;

public:
    Scanner(string fn):filename(fn){
        fin.open(fn.c_str());
        if (!fin.is_open())
        {
            cout << "read file" << fn << "fail" << endl;
            exit(1);
        }

    }
    void GetNextToken();

    ~Scanner(){
     fin.close();
    }
};

#endif // SCANNER_H

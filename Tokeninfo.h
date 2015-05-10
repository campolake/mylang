#ifndef TOKENINFO_H
#define TOKENINFO_H

#include <iostream>
#include <vector>
#include <assert.h>

using namespace std ;

/***************************************************************************
 * Token定义
 * 系统支持的关键字等的定义
 *
 * *************************************************************************/


//所有元素类型
enum TokenKind
{
    IF,//if
    ELSE,//else
    NULL_T,//null
    THIS,//this
    WHILE,//while
    PLUS,//plus
    ASSIGN,//=
    DESC,//--
    EQUAL,//==
    GT,//>
    INC,//++
    LAND,//&&
    LE,//<=
    LNOT,//!=
    MINUS,//-
    PLUS_ASSIGN,//+=
    STAR,//*
    LPAREN,//(
    RPAREN,//)
    LCURLY,//{
    RCURLY,//}
    LBRACK,//[
    RBRACK,//]
    SEMI,//;
    COMMA,//,
    DOT, //.
    FUNC,//function
};


class TokenInfo
{
private:
    //TokenKind
    TokenKind tokenKind;
    //所在的代码行，调试是用
    int lineNumber;
public:
    TokenInfo(TokenKind TokenKind,int line):tokenKind(TokenKind),lineNumber(line){}
    ~TokenInfo();
};

#endif // TOKENINFO_H

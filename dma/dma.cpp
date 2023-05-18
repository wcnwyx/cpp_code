#include "dma.h"
#include <cstring>

//BaseDMA class
BaseDMA::BaseDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

BaseDMA::BaseDMA(const BaseDMA & rs)
{
    label = new char[std::strlen(rs.label)+1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

BaseDMA::~BaseDMA()
{
    delete [] label;
}

BaseDMA & BaseDMA::operator=(const BaseDMA & rs)
{
    if(this == &rs){
        return *this;
    }
    delete [] label;

    label = new char[std::strlen(rs.label)+1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

//friend 函数不能使用 BASE::operator<<(std::ostream & os, const BaseDMA & rs)
std::ostream & operator<<(std::ostream & os, const BaseDMA & rs)
{
    os << "label:" << rs.label << std::endl;
    os << "rating:" << rs.rating << std::endl;
    return os;
}

//LackDMA class
LackDMA::LackDMA(const char * c, const char * l, int r)
:BaseDMA(l, r)
{
    std::strncpy(color, c, COLOR_LEN-1);
    color[COLOR_LEN-1] = '\0';
}

LackDMA::LackDMA(const char * c, const BaseDMA & rs)
:BaseDMA(rs)
{
    std::strncpy(color, c, COLOR_LEN-1);
    color[COLOR_LEN-1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const LackDMA & rs)
{
    os << (const BaseDMA &) rs;
    os << "color:" << rs.color << std::endl;
    return os;
}

//HasDMA class
HasDMA::HasDMA(const char * s, const char * l, int r)
:BaseDMA(l, r)
{
    style = new char[std::strlen(s)+1];
    std::strcpy(style, s);
}

HasDMA::HasDMA(const char *s, const BaseDMA & rs)
:BaseDMA(rs)
{
    style = new char[std::strlen(s)+1];
    std::strcpy(style, s);
}

HasDMA::HasDMA(const HasDMA & rs)
:BaseDMA(rs)
{
    style = new char[std::strlen(rs.style)+1];
    std::strcpy(style, rs.style);
}

HasDMA::~HasDMA()
{
    delete [] style;
}

HasDMA & HasDMA::operator=(const HasDMA & rs)
{
    if(this==&rs){
        return *this;
    }

    BaseDMA::operator=(rs);
    
    delete [] style;

    style = new char[std::strlen(rs.style)+1];
    std::strcpy(style, rs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const HasDMA & rs)
{
    os << (const BaseDMA &) rs;
    os << "style:" << rs.style << std::endl;
    return os;
}
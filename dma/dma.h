#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class BaseDMA
{
    private:
        char * label;
        int rating;
    public:
        BaseDMA(const char * l = "null", int r = 0);
        BaseDMA(const BaseDMA & rs);
        ~BaseDMA();
        BaseDMA & operator=(const BaseDMA & rs);
        friend std::ostream & operator<<(std::ostream & os, const BaseDMA & rs);
};

//derived class without DMA
//no destructor needed
//use implicit copy constructor
//use implicit assignment constructor
class LackDMA : public BaseDMA
{
    private:
        enum {COLOR_LEN = 40};
        char color[COLOR_LEN];
    public:
        LackDMA(const char * c = "blank", const char * l = "null", int r = 0);
        LackDMA(const char * c, const BaseDMA & rs);
        friend std::ostream & operator<<(std::ostream & os, const LackDMA & rs);
};

//derived class with DMA
class HasDMA : public BaseDMA
{
    private:
        char * style;
    public:
        HasDMA(const char * s = "none", const char * l = "null", int r = 0);
        HasDMA(const char * s, const BaseDMA & rs);
        HasDMA(const HasDMA & rs);
        ~HasDMA();
        HasDMA & operator=(const HasDMA & rs);
        friend std::ostream & operator<<(std::ostream & os, const HasDMA & rs);
};
#endif
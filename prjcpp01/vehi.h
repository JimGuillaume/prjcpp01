#ifndef vehi.h
#define vehi.h

#include <iostream>



using namespace std;


class vehi
{
private:
    int Km;
    string Plaq;
public:
    string Mcirc;

    void set_km(int t_km)
    {
        if (true)
        {

        }
        this->Km = t_km;
    }

    int get_Km(void)
    {
        return this->Km;
    }

    void set_Plaq(string t_Plaq)
    {
        this->Plaq = t_Plaq;
    }

    string get_Plaq(void)
    {
        return this->Plaq;
    }
};


#endif
#pragma once
#include <iostream>
#define Vehi_h
using namespace std;

class Vehi
{
private:
  int Km;
  string Plaq;
public:
  string Mcirc;

  Vehi(void)
  {
    this->Km = 0;
    this->Plaq = "x-xxxxxx";
    this->Mcirc = "01-01-0001";
  }


  Vehi(string t_Mcirc)
  {
    this->Mcirc = t_Mcirc;
  }

  Vehi(string t_Mcirc, string t_Plaq)
  {
    this->Plaq = set_Plaq(t_Plaq);
  }

  string set_Plaq(string t_Plaq)
  {
    if (t_Plaq[1] == '-')
    {
      this->Plaq = t_Plaq;
    }
    else throw 1;

  }

  void set_Km(int t_Km)
  {
    this->Km = t_Km;
  }

  // ALL THE GET
  string get_Plaq()
  {
    return this->Plaq;
  }

  int get_Km()
  {
    return this->Km;
  }
};

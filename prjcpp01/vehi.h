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

  int set_km(int t_km)
  {
    this->Km = t_km;
  }

  int get_Km()
  {
    return this->Km;
  }


  void set_Plaq(string t_Plaq)
  {
    this->Plaq = t_Plaq;
  }

  string get_Plaq()
  {
    return this->Plaq;
  }
};

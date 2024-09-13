#pragma once
#include <iostream>
#define Vehi_h
using namespace std;

class Vehi
{
private:
  int Km = 0;
  string Plaq;
public:
  string Mcirc;


  //ALL THE SET
  void set_km(int t_km)
  {
    this->Km = t_km;
  }

  void set_Plaq(string t_Plaq)
  {
    this->Plaq = t_Plaq;
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

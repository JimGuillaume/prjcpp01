#pragma once
#include <iostream>
#include "Header.h"
#include <vector>
#define NewEntry_h
using namespace std;

class TdPointeur
{
private:
  string Adress;
  int MemoryCrash = 0;

public:
  void set_entry(int InputIndex)
  {
    this->Adress = InputIndex;
  }

  string get_entry()
  {
    return this->Adress;
  }
};

void NewEntry(int NumberEntry)
{
  vector <TdPointeur> Input;
  string t_Adress;

  try
  {
    Input.resize(NumberEntry + 1);

  }
  catch (...)
  {

  }
 // Comment save l'adresse du pointeur actuel ?
 // t_Adress = Input.data(NumberEntry + 1);
}
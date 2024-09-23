//Open library
#include <iostream>
#include <vector>

//Home Library
#include "Header.h"

using namespace std;

int main()
{
  // Input Classe
  vector <Vehi*> TdVehi;
  Vehi* pinter_Vehi = 0;
  Vehi* pVehi = 0;

  //Input Variables globales
  int inter_int = 0, x = 0;
  string inter_string;
  char test;
  bool check = 0;
  bool crash = false;
  bool newOk;

  system("cls");
  cout << "\tEncodage Systeme" << endl;
  //Sécurisation Tableai=u Dynamique
  TdVehi.resize(0);

  try
  {
    do
    {
      newOk = false;

      pinter_Vehi = new Vehi();
      newOk = true;
      x++;
      cout << "\tVehicule N  " << x << endl;
      cout << "Date de mise en circulation du vehicule : ";
      cin >> pinter_Vehi->Mcirc;

      do
      {
        cout << "Plaque immatriculation : ";
        cin >> inter_string;
        if (inter_string[1] == '-')
        {
          check = true;
        }
        else
        {
          check = false;
          cout << "WRONG INPUT  deuxieme caractere doit etre un -" << endl;
        }

      } while (!check);
      pinter_Vehi->set_Plaq(inter_string);


      do
      {
        cout << "Kilometrage : ";
        cin >> inter_int;
        if (inter_int >= 0)
        {
          check = true;
        }
        else
        {
          check = false;
          cout << "KM NEED TO BE POSITIVE" << endl;
        }

      } while (!check);
      pinter_Vehi->set_km(inter_int);

      //Input into TD & boucle vérification
      TdVehi.push_back(pinter_Vehi);
      cout << "Encore une Vehicule ? : (y/n)";
      cin >> test;
    } while (test == 'y' || test == 'Y');
  }
  catch (...)
  {
    if (newOk = false)
      cout << "Memory Leak" << endl;
  }
  

  //RECAPITULATIF
  system("cls");
  cout << "\n\t Recapitulatif :" << endl;
  for (int i = 0; i < TdVehi.size(); i++)
  {
    cout << "\t Vehicule N " << i + 1 << endl;
    cout << "Date : " << TdVehi[i]->Mcirc << endl;
    cout << "Plaque : " << TdVehi[i]->get_Plaq() << endl;
    cout << "Km : " << TdVehi[i]->get_Km() << endl;
  }

  if (crash)
  {
    cout << "Date : " << pinter_Vehi->Mcirc << endl;
    cout << "Plaque : " << pinter_Vehi->get_Plaq() << endl;
    cout << "Km : " << pinter_Vehi->get_Km() << endl;
  }
  pinter_Vehi = 0;

  for (int i = 0; i < TdVehi.size(); i++)
  {
    delete TdVehi[i];
    TdVehi[i] = 0;
  }
  TdVehi.clear();
}


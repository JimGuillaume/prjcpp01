//Open library
#include <iostream>
#include <vector>
//Home Library
#include "Header.h"

using namespace std;

int main()
{
  // Input Classe
  vector <Vehi> TdVehi;
  vector <int> TdPointeur;
  Vehi inter_Vehi;
  Vehi* pVehi = 0;

  //Input Variables globales
  int inter_int = 0, x = 0, size = 0 ;
  string inter_string;
  char test;
  bool check = 0;

  system("cls");
  cout << "\tEncodage Systeme" << endl;
  cout << "Voulez vous rentrer un véhicule ? (y/n) : ";
  cin >> test;

  TdVehi.resize(0);
  TdPointeur.resize(0);

  while(test == 'y' || test == 'Y')
  {
    x++;
    cout << "Vehicule N  " << x << endl;
    cout << "Date de mise en circulation du vehicule : ";
    cin >> inter_Vehi.Mcirc;

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

    inter_Vehi.set_Plaq(inter_string);



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
    inter_Vehi.set_km(inter_int);

    //Input into TD & boucle vérification
    TdVehi.push_back(inter_Vehi);

    cout << "Encore une Vehicule ? : (y/n)";
    cin >> test;
  }



  //RECAPITULATIF
  size = TdVehi.size();
  system("cls");
  cout << "\n\t Recapitulatif :" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "\t Vehicule N " << i + 1 << endl;
    cout << "Date : " << TdVehi[i].Mcirc << endl;
    cout << "Plaque : " << TdVehi[i].get_Plaq() << endl;
    cout << "Km : " << TdVehi[i].get_Km() << endl;
  }
  TdVehi.clear();
}


#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
  // Input Variable
  Vehi tVehi[3];
  int inter_int = 0;
  string inter_string;
  bool check;

  system("cls");
  cout << "\tEncodage Systeme" << endl;

  for (int x = 0; x < 3; x++)
  {
    cout << "Vehicule N  " << x+1 << endl;
    cout << "Date de mise en circulation du vehicule : ";
    cin >> tVehi[x].Mcirc;

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

    tVehi[x].set_Plaq(inter_string);

    do
    {
      cout << "Kilometrage : ";
      cin >> inter_int;
      if (inter_int >= 0)
      {
        check = true;
      }
      else check = false;

    } while (!check);
    tVehi[x].set_km(inter_int);
  }

  //RECAPITULATIF
  system("cls");
  cout << "\n\t Recapitulatif :" << endl;
  for (int x = 0; x < 3; x++)
  {
    cout << "\t Vehicule N " << x+1 << endl;
    cout << "Date : " << tVehi[x].Mcirc << endl;
    cout << "Plaque : " << tVehi[x].get_Plaq() << endl;
    cout << "Km : " << tVehi[x].get_Km() << endl;
  }
}
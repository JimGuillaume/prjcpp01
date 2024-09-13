#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    // Input Variable
    Vehi test;

    int inter_int = 0;
    int x, y;

    string inter_string;

    bool check;


    //Input class vehi
    cout << "Date de mise en circulation du vehicule : "; 
    cin >> test.Mcirc;


    //Securisation d'interface 
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

    test.set_Plaq(inter_string);

    do
    {
      cout << "Kilometrage : ";
      cin >> inter_int;
      if (inter_int >= 0)
      {
        check = true;
      }else check = false;

    } while (!check);
    test.set_km(inter_int);
    

    cout << "\n\t Recapitulatif :" << endl;
    cout << "Date : " << test.Mcirc << endl;
    cout << "Plaque : " << test.get_Plaq() << endl;
    cout << "Km : " << test.get_Km() << endl;


    system("pause");
}
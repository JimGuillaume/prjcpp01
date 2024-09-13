#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    // Input Variable
    Vehi test;

    int inter_int;
    int i, j, x, y;

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
      x = sizeof(inter_int);
      y = 0;
        for (i = 0; i < x; i++)
        {
          if (0 <= inter_int[i] <= 9)
          {
            y++;
          }
        }

    } while (!(y == x));
    x = 0; y = 0; i = 0;
    

    cout << "\n\t Recapitulatif :" << endl;
    cout << "Date : " << test.Mcirc << endl;
    cout << "Plaque : " << test.get_Plaq() << endl;
    cout << "Km : " << test.get_Km() << endl;


    system("pause");
}
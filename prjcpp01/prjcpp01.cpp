#include <iostream>
#include "IntOrString.h"
#include "prjcpp01.h"

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




int main()
{
    // Input Variables
    vehi test;
    int inter_int;
    string inter_string;


    //Input class vehi
    cout << "Date de mise en circulation du vehicule : "; 
    cin >> test.Mcirc;

    cout << "Plaque immatriculation : "; 
    cin >> inter_string;
    test.set_Plaq(inter_string);

    cout << "Nombre de Km : "; 
    cin >> inter_int;
    while(!IntOrString(inter_int))
    {
        cout << "Mauvais input" << endl;
        cout << "Nombre de Km : ";
        cin >> inter_int;
    }
    test.set_km(inter_int);


    cout << "\n\t Recapitulatif :" << endl;
    cout << "Date : " << test.Mcirc << endl;
    cout << "Plaque : " << test.get_Plaq() << endl;
    cout << "Km : " << test.get_Km() << endl;


    system("pause");
}
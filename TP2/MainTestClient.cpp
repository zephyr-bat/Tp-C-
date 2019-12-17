/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 6 decembre 2019
  * Summary: Classe Magasin Tp2
*/

#include <iostream>
#include <string>
#include "ClientTp2.h"

int main()
{
    ClientTp2 Client(1,"Bob","billy");
    Produit Test1("test",32,3,"Produit test",1);
    Client.AjoutProduit(Test1);
    cout << Client.toString() << endl;
    Client.AffichePanier();
}

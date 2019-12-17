/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 6 decembre 2019
  * Summary: Classe Magasin Tp2
*/

#include <iostream>
#include <string>
#include "Magasin.h"

int main()
{
    Magasin Mag1("Cheztoby");
    Produit Test("test",32,3,"Produit test",1);
    Mag1.AjoutProduit(Test);
    cout << Mag1.ToStringProduit() << endl;
}

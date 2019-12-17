/**
  * File: Magasin.h
  * Author: Franck GUILLERME
  * Date: 6 decembre 2019
  * Summary: Classe Magasin Tp2
*/

#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "ClientTp2.h"

//#include Commande.h
using namespace std;
#ifndef _Magasin_h
#define _Magasin_h

class Magasin {
public:
       	Magasin(string nom);
        void AjoutProduit(Produit produit);
       	string ToStringProduit();
private:
        string Nom;
        std::vector<Produit> m_produits;
        //std::vector<ClientTp2> m_clients;
        //std::vector<Commande*> m_Commandes;
};
#endif

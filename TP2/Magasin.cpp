/**
  * File: Magasin.h
  * Author: Franck GUILLERME
  * Date: 6 decembre 2019
  * Summary: Classe Magasin Tp2
*/
#include <iostream>
#include <string>
#include "Magasin.h"
using namespace std;


Magasin::Magasin(string nom)
{
  Nom = nom;
}


void Magasin::ToStringProduit()
{
	
	for (Produit* p: m_produits)
	{
		
		string info= p->ToString();

	} 
}




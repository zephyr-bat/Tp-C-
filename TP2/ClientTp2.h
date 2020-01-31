/**
  * File: Client.h
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/

#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
using namespace std;
#ifndef _ClientTp2_h
#define _ClientTp2_h

class ClientTp2 {
public:
	ClientTp2();
	ClientTp2(int id, string nom, string prenom);
	int getid() const;
	string getNom() const;
	string getPrenom() const;
	vector<Produit*> getListeProduits() const;
	string ToString();
	void setNom(string nom);
	void setPrenom(string prenom);
	void ChangeClient(string nom, string prenom);
	void AjoutProduit(Produit *produit);
	void AffichePanier();
	void modifproduitQuantite(string nom, int qte);
	void SupprimerProduit(string nom);
	void ViderPanier();

private:
	int id;
	string Nom;
	string Prenom;
	vector<Produit*> Panier;
};
#endif

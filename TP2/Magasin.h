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
#include "commande.h"

using namespace std;
#ifndef _Magasin_h
#define _Magasin_h

class Magasin {
public:
	Magasin();
	Magasin(string nom);
	//produit
	void AjoutProduit(Produit *produit);
	Produit * GetProduit(string nom);
	void ToStringProduit();
	void modifProduitquantite(string nom, int qua);
	void afficheProduit(string nom);
	//Client
	void AjoutClient(int id,string nom, string prenom);
	ClientTp2 * GetClient(string nom);
	void ToStringClient();
	void afficheClient(string nom);
	void afficheClient(int id);
	void AjoutProduitPourClient(string nomProduit, string nomClient);
	void SupprimeProduitPourClient(string nomProduit, string nomClient);
	void ModifQtePourClient(string nomProduit,int Qte ,string nomClient);
	//Commande
	void ValidationCommande(string nom);
	void ChangementStatutCommande(int id,bool statut);
	void ToStringCommande();
	Commande * GetCommande(int id);
	void afficheCommandeClient(string nom);
private:
	string Nom;
	std::vector<Produit*> m_produits;
	std::vector<ClientTp2*> m_clients;
	std::vector<Commande*> m_Commandes;
	int ndcommande;
};
#endif
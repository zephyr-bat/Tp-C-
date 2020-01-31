/****
	* Titre : Commande.h
	* Auteur : Armand Audeoud
	* Date : 17/12/19
	* Objectif : déclarer la classe Commande
	****/

#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "ClientTp2.h"
using namespace std;

#ifndef _Commande_h
#define _Commande_h
class Commande
{
public:
	Commande();
	Commande(int id,ClientTp2* Client, vector<Produit*> ListeProduit, bool Statut);
	string ToString();
	void SetStatut(bool Statut);
	int Getid();
	ClientTp2* GetClient();
private:
	int idCommande;
	vector<Produit*> listeProduit;
	ClientTp2* client;
	bool statut;
};
#endif

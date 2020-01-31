/****
	* Titre : main.cpp
	* Auteur : Armand Audeoud Franck Guillerme
	* Date : 06/12/19
	* Objectif : deffinir le main
	****/


#include <string>
#include <iostream>
#include "Magasin.h"
#include "Produit.h"
#include "ClientTp2.h"
#include <stdlib.h>
int main()
{
	/*Question 1

	cout << "Question 1" << endl;
	Magasin magasin0;
	*/
	/*Question 2 

	cout << "Question 2" << endl;
	Produit produit("test",10.1,5,"description",1);
	std::cout << "Le produit est : " << produit.getTitre() << std::endl;
	*/
	/* Question 3

	cout << "Question 3" << endl;
	Magasin magasin1;
	magasin1.AjoutProduit(new Produit("NomProduit1",1.0,2,"produit1",2));
	magasin1.AjoutProduit(new Produit("NomProduit2",5.0, 5, "produit2", 3));
	magasin1.ToStringProduit();
	magasin1.modifProduitquantite("NomProduit1", 10);
	cout << "--------------------" << endl;
	magasin1.afficheProduit("NomProduit1");
	*/
	/*Question 4

	cout << "Question 4" << endl;
	ClientTp2 client(1, "nom1", "prenom1");
	Produit *produit1 = new Produit("NomProduit3",2.0,8,"Produit3",4);
	Produit *produit2 = new Produit("NomProduit4",10.0, 4, "Produit4", 5);
	client.AjoutProduit(produit1);
	client.AjoutProduit(produit2);
	std::cout << "Le client est : " << client.getNom() << std::endl;
	client.modifproduitQuantite("NomProduit1", 2);
	cout << "--------------------" << endl;
	client.AffichePanier();
	client.SupprimerProduit("NomProduit2");
	cout << "--------------------" << endl;
	client.AffichePanier();
	client.ViderPanier();
	cout << "--------------------" << endl;
	client.AffichePanier();
	cout << "--------------------" << endl;
	delete produit1;
	delete produit2;
	*/
	/*Question 5

	cout << "Question 5" << endl;
	Magasin magasin2;
	magasin1.AjoutProduit(new Produit("NomProduit5", 1.0, 2, "produit5", 6));
	magasin1.AjoutProduit(new Produit("NomProduit6", 5.0, 5, "produit6", 7));
	magasin2.AjoutClient(2,"nom2", "prenom2");
	magasin2.AjoutClient(3,"nom3", "prenom3");
	magasin2.ToStringClient();
	cout << "--------------------" << endl;
	magasin2.afficheClient("nom2");
	cout << "--------------------" << endl;
	magasin2.afficheClient(2);
	magasin2.AjoutProduitPourClient("NomProduit1", "nom2");
	magasin2.AjoutProduitPourClient("NomProduit2", "nom2");
	magasin2.SupprimeProduitPourClient("NomProduit2", "nom2");
	magasin2.ModifQtePourClient("NomProduit1", 4, "nom2");
	*/
	/*Question 6

	cout << "Question 6" << endl;
	ClientTp2 client1(4, "nom4", "prenom4");
	Produit *produit3 = new Produit("NomProduit7", 1.5, 2, "produit7", 8);
	Produit *produit4 = new Produit("NomProduit8", 6.7, 6, "produit8", 9);
	client1.AjoutProduit(produit1);
	client1.AjoutProduit(produit2);
	Commande commande(10,&client1, client1.getListeProduits(),false);
	cout << commande.ToString()<<endl;
	delete produit1;
	delete produit2;
	*/
	/* Question 7
	cout << "Question 7" << endl;
	Magasin magasin3;
	magasin3.AjoutProduit(new Produit("NomProduit8", 0.01, 7, "produit8", 9));
	magasin3.AjoutProduit(new Produit("NomProduit9", 4.55, 7, "produit8", 10));
	magasin3.AjoutClient(7, "nom6", "prenom6");
	magasin3.AjoutClient(8, "nom7", "prenom7");
	magasin3.AjoutProduitPourClient("NomProduit8","nom6");
	magasin3.AjoutProduitPourClient("NomProduit9", "nom6");
	magasin3.SupprimeProduitPourClient("NomProduit9", "nom6");
	magasin3.ModifQtePourClient("NomProduit8", 2, "nom6");
	magasin3.ValidationCommande("nom6");
	magasin3.ToStringCommande();
	cout << "--------------------" << endl;
	magasin3.AjoutProduitPourClient("NomProduit9", "nom7");
	magasin3.ValidationCommande("nom7");
	magasin3.afficheCommandeClient("nom7");
	cout << "--------------------" << endl;
	magasin3.ChangementStatutCommande(1,false);
	magasin3.ToStringCommande();
	*/
	//Question 8 

	Magasin *magasin = new Magasin();
	bool quit = false;
	bool quit1 = false;
	bool quit2 = false;
	bool quit3 = false;
	bool quit4 = false;
	while (!quit) {
		string choixMenu = "";
		cout << "0:Gestion des produits." << endl;
		cout << "1:Gestion des clients." << endl;
		cout << "2:Getion des commandes." << endl;
		cout << "3:gestion du magasin." << endl;
		cout << "5:quitter." << endl;
		cin >> choixMenu;
		system("clear");
		int res = stoi(choixMenu);
		switch (res){
			case 0:
				quit1 = false;
				while (!quit1) {
					string choixProduits = "";
					cout << "0:ajouter un produit." << endl;
					cout << "1:afficher tous les produits." << endl;
					cout << "2:chercher un produit avec son nom." << endl;
					cout << "3:mettre a jour la quantite d'un produit." << endl;
					cout << "5:retour" << endl;
					cin >> choixProduits;
					system("clear");
					res = stoi(choixProduits);
					switch (res){
						case 0:
							if (true) {
								string titreProduit = "";
								string descriptionProduit = "";
								string quantiteProduit = "";
								string prixProduit = "";
								cout << "Entrer le titre du produit :" << endl;
								cin >> titreProduit;
								cout << "Entrer la description du produit :" << endl;
								cin >> descriptionProduit;
								cout << "Entrer la quantite du produit :" << endl;
								cin >> quantiteProduit;
								cout << "Entrer le prix du produit :" << endl;
								cin >> prixProduit;
								magasin->AjoutProduit(new Produit(titreProduit, stod(prixProduit), stoi(quantiteProduit), descriptionProduit, 0));
							}
						break;
						case 1:
							magasin->ToStringProduit();
							break;
						case 2:
							if (true) {
								string titreProduit = "";
								cout << "Entrer le titre du produit :" << endl;
								cin >> titreProduit;
								magasin->afficheProduit(titreProduit);
							}
							break;
						case 3:
							if (true) {
								string titreProduit = "";
								string QuantiteProduit;
								cout << "Entrer le titre du produit :" << endl;
								cin >> titreProduit;
								cout << "Entrer la nouvelle quantite du produit :" << endl;
								cin >> QuantiteProduit;
								magasin->modifProduitquantite(titreProduit, stoi(QuantiteProduit));
							}
							break;
						case 5:
							quit1 = true;
							break;
						default:
						cout << "nombre inconnue" << endl;
							break;
					}
				}
				break;
			case 1:
				quit2 = false;
				while (!quit2) {
					string choixGestionClients = "";
					cout << "0:ajout client." << endl;
					cout << "1:affiche les clients." << endl;
					cout << "2:recherche un client avec son nom." << endl;
					cout << "3:recherche un client avec son id." << endl;
					cout << "5:retour" << endl;
					cin >> choixGestionClients;
					res = stoi(choixGestionClients);
					system("clear");
					switch(res)
					{
					case 0:
						if (true) {
							string nom = "";
							string prenom = "";
							int id;
							cout << "Entrer le nom du client :" << endl;
							cin >> nom;
							cout << "Entrer la prenom du client :" << endl;
							cin >> prenom;
							cout << "Entrer l'id du client :" << endl;
							cin >> id;
							magasin->AjoutClient(id, nom, prenom);
						}
						break;
					case 1:
						magasin->ToStringClient();
						break;
					case 2:
						if (true) {
							string nom = "";
							cout << "Entrer le nom du client :" << endl;
							cin >> nom;
							magasin->afficheClient(nom);
						}
						break;
					case 3:
						if (true) {
							string id = "";
							cout << "Entrer l'identifiant du client :" << endl;
							cin >> id;
							magasin->afficheClient(stoi(id));
						}
						break;
					case 5:
						quit2 = true;
						break;
					default:
						cout << "nombre inconnue" << endl;
						break;
					}
				}
				break;
			case 2:
				quit3 = false;
				while (!quit3) {
					string choixGestionCommandes = "";
					cout << "0:Valider la commande d'un client." << endl;
					cout << "1:Changer le statut d'une commande." << endl;
					cout << "2:afficher les commandes." << endl;
					cout << "3:rechercher les commandes d'un client." << endl;
					cin >> choixGestionCommandes;
					res = stoi(choixGestionCommandes);
					system("clear");
					switch (res) {
					case 0 :
						if (true) {
							string nom = "";
							cout << "Entrer le nom du client :" << endl;
							cin >> nom;
							magasin->ValidationCommande(nom);
						}
						break;
					case 1:
						if (true) {
							string idClient = "";
							string etat = "";
							cout << "Entrer l'identifiant du client :" << endl;
							cin >> idClient;
							cout << "Entrer l'état de la commande[0 = faux:1 = vrai] :" << endl;
							cin >> etat;
							int result = stoi(etat);
							bool Etat = true;
							if (result == 0) { Etat = false; }
							magasin->ChangementStatutCommande(stoi(idClient), Etat);
						}
						break;
					case 2:
						magasin->ToStringCommande();
						break;
					case 3:
						if (true) {
							string nomClient = "";
							cout << "Entrer le nom du client :" << endl;
							std::cin >> nomClient;
							magasin->afficheCommandeClient(nomClient);
						}
						break;
					case 5:
						quit3 = true;
						break;
					default:
						cout << "nombre inconnue" << endl;
						break;		
					}
				}
				break;
			case 3:
				if(true){
				string choixGestionMagasin = "";
				cout << "0:ajouter un produit dans le panier d'un client." << endl;
				cout << "1:supprimer un produit dans le panier d'un client." << endl;
				cout << "2:modifier la quantite d'un produit selectionne dans le panier d'un client." << endl;
				cin >> choixGestionMagasin;
				system("clear");
				quit4 = false;
				while (!quit4) {
					res = stoi(choixGestionMagasin);
					switch (res) {
					case 0:
						if (true) {
							string nomProduit = "";
							string nomClient = "";
							cout << "Entrer le nom du produit :" << endl;
							cin >> nomProduit;
							cout << "Entrer le nom du client :" << endl;
							cin >> nomClient;
							magasin->AjoutProduitPourClient(nomProduit, nomClient);
						}
						break;
					case 1:
						if (true) {
							string nomProduit = "";
							string nomClient = "";
							cout << "Entrer le nom du produit :" << endl;
							cin >> nomProduit;
							cout << "Entrer le nom du client :" << endl;
							cin >> nomClient;
							magasin->SupprimeProduitPourClient(nomProduit, nomClient);
						}
						break;
					case 2:
						if (true) {
							string nomProduit = "";
							string nomClient = "";
							string nouvelleQuantiteProduit;
							cout << "Entrer le nom du produit :" << endl;
							cin >> nomProduit;
							cout << "Entrer la nouvelle quantité du produit " << nomProduit << " à ajouter dans le panier du client.";
							cin >> nouvelleQuantiteProduit;
							cout << "Entrer le nom du client :" << endl;
							cin >> nomClient;
							magasin->ModifQtePourClient(nomProduit, stoi(nouvelleQuantiteProduit), nomClient);
						}
						break;
					case 5:
						quit4 = true;
						break;
					default:
						break;

					}
				}
				}
				break;
			case 5:
				quit = true;
				break;
			default:
			cout << "nombre inconnue" << endl;
				break;
		}
		
	}
	delete magasin;
	return 0;
}


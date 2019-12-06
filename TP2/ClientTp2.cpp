/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/
#include <iostream>
#include <string>
#include "ClientTp2.h"
using namespace std;

//constructeur du client 
ClientTp2::ClientTp2(int id, string nom, string prenom)
{
    this->id = id;
    this->Nom = nom;
    this->Prenom = prenom;
}

//geteur id du client
int ClientTp2::getid() const
{
    return id;
}

//geteur du nom client
string ClientTp2::getNom() const
{
    return Nom;
}

//geteur du prenom client
string ClientTp2::getPrenom() const
{
    return Prenom;
}

//seteur du nom client
void ClientTp2::setNom(string nom)
{
    this->Nom =nom;
}

//seteur du Prenom client
void ClientTp2::setPrenom(string prenom)
{
    this->Prenom = prenom;
}

// fonction de modification du client 
void ClientTp2::ChangeClient(string nom, string prenom)
{
    setNom(nom);
    setPrenom(prenom);
}

void ClientTp2::AjoutProduit(Produit produit)
{
    Panier.push_back(produit);
}



void ClientTp2::AffichePanier()
{
    for (Produit p: Panier) 
    {
        std::cout << p.ToString() << endl;
    }
}

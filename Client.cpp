/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/
#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

//constructeur du client 
Client::Client(int id, string nom, string prenom)
{
    this->id = id;
    this->Nom = nom;
    this->Prenom = prenom;
}

//geteur id du client
int Client::getid() const
{
    return id;
}

//geteur du nom client
string Client::getNom() const
{
    return Nom;
}

//geteur du prenom client
string Client::getPrenom() const
{
    return Prenom;
}

//seteur du nom client
void Client::setNom(string nom)
{
    this->Nom =nom;
}

//seteur du Prenom client
void Client::setPrenom(string prenom)
{
    this->Prenom = prenom;
}

// fonction de modification du client 
void Client::ChangeClient(string nom, string prenom)
{
    setNom(nom);
    setPrenom(prenom);
}

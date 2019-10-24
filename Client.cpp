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

Client::Client(int id, string nom, string prenom)
{
    this->id = id;
    this->Nom = nom;
    this->Prenom = prenom;
}

int Client::getid() const
{
    return id;
}

string Client::getNom() const
{
    return Nom;
}

string Client::getPrenom() const
{
    return Prenom;
}

void Client::setNom(string nom)
{
    this->Nom =nom;
}

void Client::setPrenom(string prenom)
{
    this->Prenom = prenom;
}

void Client::ChangeClient(string nom, string prenom)
{
    setNom(nom);
    setPrenom(prenom);
}

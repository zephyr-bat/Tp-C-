/**
  * File: Client.h
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/

#include <iostream>
#include <string>
using namespace std;
#ifndef _Client_h
#define _Client_h

class Client {
public:
        Client(int id,string nom,string prenom);
        int getid() const;
        string getNom() const;
        string getPrenom() const;
        void setNom(string nom);
        void setPrenom(string prenom);
        void ChangeClient(string nom,string prenom);
private:
        int id;
        string Nom;
        string Prenom;
};
#endif

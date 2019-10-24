/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/

#include <iostream>
#include <string>
#include "Client.h"

int main()
{
    Client client1(1,"Sion","Bob");
    std::cout << "nom: "<< client1.getNom() << " Prenom: "<< client1.getPrenom() << std::endl;
    client1.ChangeClient("Lanbert","nicolette");
    std::cout << "nom: "<< client1.getNom() << " Prenom: "<< client1.getPrenom() << std::endl;
}

/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 15 novembre 2019
  * Summary: Classe Hotel Tp1
*/
#include <iostream>
#include <string>
using namespace std;
#include "Hotel.h"


int jour, mois, annee=0;

int main()
{
	vector<int> list { 10, 20, 30, 40 };
	Hotel hotel1(1,"ibis","lyon",list);
	cout << "id: "<< hotel1.getId() <<"nom: "<< hotel1.getNom() << " Ville: "<< hotel1.getVille() << " nombre de chambre: "<<hotel1.getChambre(10)<< endl;
	hotel1.ChangeHotel(2,"Ibis","Lyon",55);
	cout << "id: "<<hotel1.getId() <<"nom: "<< hotel1.getNom() << " Ville: "<< hotel1.getVille() << " nombre de chambre: "<<hotel1.getChambre(10)<< endl;
}

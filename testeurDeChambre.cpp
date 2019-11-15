#include <iostream>
#include <string>
#include "Chambre.h"



int main()
{

	int id;
	float prix;
	std::string id_type ="";
	Type type;
	bool fin = true;

	std::cout << "id puis prix " ;
	std::cin >> id ; std::cin >> prix;

	while (fin == true) 
	{
		std::cout << "entrer le type de la chambre (s pour Simple, d pour Deux, c pour Suite) : ";
		std::cin >> id_type;
		if (id_type == "s" || id_type == "d" || id_type == "c")
			fin = false;
	}
	
	



	if(id_type == "s"){
		Chambre maChambre(id, prix, Simple);
		id = maChambre.getId();
		prix = maChambre.getPrix();
		type = maChambre.getType();
	}


	if(id_type == "d"){
		Chambre maChambre(id, prix, Deux);
		id = maChambre.getId();
		prix = maChambre.getPrix();
		type = maChambre.getType();
	}

	if(id_type == "c"){
		Chambre maChambre(id, prix, Suite);
		id = maChambre.getId();
		prix = maChambre.getPrix();
		type = maChambre.getType();
	}



	std::cout << "id : " << id <<" prix : " << prix << " type : " << type << std::endl;


	return 0;
}
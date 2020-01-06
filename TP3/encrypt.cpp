#include "encrypt.h"
using namespace std; 


Encrypt::Encrypt(){

    m\_plain = "";

    m\_cipher = "";
}



string Encrypt::get\_plain() const{
	return m\_plain;
}


string Encrypt::get\_cipher() const{
	return m\_cipher;
}


bool Encrypt::read(bool isPlain, string filename){
	bool result = true;
		ifstream monFichier(filename.c_str());
		if(monFichier){
			cout << "Bonjour, je suis une phrase écrite dans un fichier" << endl;
			string ligne;
			string msg = "";
			while(getline(monFichier, ligne)){
				msg +=ligne;
			}
			if(isPlain){
				m\_plain = msg;
			}
			else{
				m\_cipher = msg;
			}
		}
		else{
			cout << "erreur" << endl;
			result = false;
		}
	return result;	
}


bool Encrypt::write(bool isPlain, string filename){
	bool result = true;
		ofstream monFichier(filename.c_str());
		if(monFichier){

			if(isPlain){
				monFichier << m\_plain;
			}
			else{
				monFichier << m\_cipher;
			}
		}
		else{
			cout << "erreur" << endl;
			result = false;
		}
	return result	
}
#include "encrypt.h" 
using namespace std; 

class Caesar: public Encrypt {

public:

    Caesar();

    string encode();

    string decode();

    void setFichier(string fichier);

    int getAscii(char ics);

    char getChar(int hyqce);

    char sipossible(int i,char x);

private: 
	string nomFichier;

};

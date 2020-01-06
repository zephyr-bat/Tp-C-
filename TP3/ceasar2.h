#include "encrypt.h" 
using namespace std; 

class Caesar2: public Encrypt {

public:

    Caesar2();

    string encode();

    string decode();

    void setFichier(string fichier);

    int getAscii(char ics);

    char getChar(int hyqce);

private: 
	string nomFichier;

};

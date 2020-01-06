#include "ceasar.h"
using namespace std; 

 Caesar::Caesar(): Encrypt() {
 	nomFichier ="";
 }

 string Caesar::encode(){
 	Encrypt::read(true,nomFichier);
 	string msg =Encrypt::get\_plain();
 	string msgcode = "";
 	for(int i = 0;i < msg.length(); i++)
 	{
 		char c = msg[i];
 		int Ascii = getAscii(c);
 		if (Ascii >= 97 && Ascii <=122){
 			Ascii += 3;
 			if (Ascii > 122 )
 			{
 				Ascii -= 26;
 			}
 		}
 		msgcode += getChar(Ascii);
 	}
 	return msgcode;
 }

 string Caesar::decode(){
 	Encrypt::read(false,nomFichier);
 	string msg =Encrypt::get\_cipher();
 	string msgcode = "";
 	for(int i = 0;i < msg.length(); i++)
 	{
 		char c = msg[i];
 		int Ascii = getAscii(c);
 		if (Ascii >= 97 && Ascii <=122){
 			Ascii -= 3;
 			if (Ascii< 97 )
 			{
 				Ascii += 26;;
 			}
 		}
 		msgcode += getChar(Ascii);
 	}
 	return msgcode;
 }

void Ceasar::setFichier(string fichier)
{
	nomFichier= fichier;
}

int Ceasar::getAscii(char ics){
	int iks = ics;
	return iks;
}

char Ceasar::getChar(int hyqce){
	char ycks = hyqce;
	return ycks;

}
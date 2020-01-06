#include "ceasar2.h"
using namespace std; 

 Caesar2::Caesar2(): Encrypt() {
 	nomFichier ="";
 }

 string Caesar2::encode(){
 	Encrypt::read(true,nomFichier);
 	string msg =Encrypt::get\_plain();
 	string msgcode = "";
 	for(int i = 0 ; i < msg.length(); i++)
 	{
 		char c = msg[i];
 		int Ascii = getAscii(c);
 		if (Ascii >= 32 && Ascii <=126){
 			Ascii += 3;
 			if (Ascii > 126 )
 			{
 				Ascii -= 95;
 			}
 		}
 		msgcode += getChar(Ascii);
 	}
 	return msgcode;
 }

 string Caesar2::decode(){
 	Encrypt::read(false,nomFichier);
 	string msg =Encrypt::get\_cipher();
 	string msgcode = "";
 	for(int i = 0 ; i < msg.length(); i++)
 	{
 		char c = msg[i];
 		int Ascii = getAscii(c);
 		if (Ascii >= 32 && Ascii <=126){
 			Ascii -= 3;
 			if (Ascii< 32 )
 			{
 				Ascii += 95;
 			}
 		}
 		msgcode += getChar(Ascii);
 	}
 	return msgcode;
 }

void Ceasar2::setFichier(string fichier)
{
	nomFichier= fichier;
}

int Ceasar2::getAscii(char ics){
	int iks = ics;
	return iks;
}

char Ceasar2::getChar(int hyqce){
	char ycks = hyqce;
	return ycks;

}
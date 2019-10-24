/****
	* Titre : date.h
	* Auteur : Armand Audeoud
	* Date : 24/10/19
	* Objectif : déclarer la classe Date.h
	****/


#ifndef DATE_H
#define DATE_H

class Date{
	private :
		int m_jour;
		int m_mois;
		int m_annee;
	public :
		Date(int jour, int mois, int annee);
		int getJour() const;
		void setJour(int jour);
		int getMois() const;
		void setMois(int mois);
		int getAnnee() const;
		void setAnnee(int annee);

		void setDate(int jour, int mois, int annee); 

};

#endif
/****
	* Titre : date.cpp
	* Auteur : Armand Audeoud
	* Date : 24/10/19
	* Objectif : définir la classe Date.h
	****/



#include "date.h"

Date::Date(int jour, int mois, int annee)
{
	this->m_jour = jour;
	this->m_mois = mois;
	this->m_annee = annee;
}

int Date::getJour() const{
	return m_jour;
}

void Date::setJour(int jour){
	m_jour = jour;
}


int Date::getMois() const{
	return m_mois;
}

void Date::setMois(int mois){
	m_mois = mois;
}


int Date::getAnnee() const{
	return m_annee;
}

void Date::setAnnee(int annee){
	m_annee = annee;
}


void Date::setDate(int jour, int mois, int annee){
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
}
/*
 * DVD.cpp
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */

#include "DVD.h"
#include <iostream>

DVD::DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre)
   : Medium(initTitel), altersfreigabe(initAltersfreigabe) , genre(initGenre) {}


DVD::~DVD() {}

void DVD::ausgabe() const {
	Medium::ausgabe();
	std::cout << "FSK: ab " << altersfreigabe << std::endl;
	std::cout << "Genre " << genre << std::endl;
}
bool DVD::ausleihen(Person person, Datum ausleihdatum) {
	if(status) {
		std::cout << "Die DVD \" " << titel << "\" ist bereits verliehen!"<<std::endl;
		return false;
	}
	 Datum aktuellesDatum = Datum();

	int alter = aktuellesDatum.getJahr() - person.getGeburtsdatum().getJahr();

	    if (alter < altersfreigabe) {
	        std::cout << "Die DVD \"" << titel << "\" darf nicht an " << person.getName()
	                  << " ausgeliehen werden. \n";
	        return false;
	}
	status = true;
	personAusgeliehen = person;
	datumAusgeliehen = ausleihdatum;
	std::cout << "Die DVD\"" << titel << "\" wird an " << person.getName() << "verliehen." << std::endl;
	return true;
}
bool DVD::zurueckgeben()
{
	if(status)
	{
		status = false;
		std::cout << "Die DVD \""<< titel << "\" wurde zurueckgegeben." << std::endl;
		return true;
	}
	else
	{
		std::cout << "Die DVD \""<<titel << "\" ist nicht verliehen!" << std::endl;
		return false;
	}
}

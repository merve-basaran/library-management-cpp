/*
 * Magazin.cpp
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */

#include "Magazin.h"
#include "Datum.h"
#include <iostream>

Magazin::Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte)
    : Medium(initTitel), erscheinungsdatum(initDatumAusgabe), sparte(initSparte) {}

Magazin::~Magazin() {}

void Magazin::ausgabe() const {
    Medium::ausgabe();
    std::cout << "Erscheinungsdatum: " << erscheinungsdatum << std::endl;
    std::cout << "Sparte: " << sparte << std::endl;
}
    bool Magazin::ausleihen(Person person, Datum ausleihdatum) {

    	if ((ausleihdatum - erscheinungsdatum) == 0) {
    		std::cout << "Das Magazin \" " << titel << "\" ist nicht die aktuellste Ausgabe und kann nicht ausgeliehen werden, \n";
    		return false;
    	}

    	if (( ausleihdatum - erscheinungsdatum) > 0) {
    		std::cout << "Diese Ausgabe ist die neueste Ausgabe des Magazins." << std::endl;

    		return Medium::ausleihen(person, ausleihdatum);
    	}

    	if (status) {
    		std::cout << "Das Medium \" " << titel << "\" ist bereits verliehen! " << std::endl;
    		return false;
    	}

    	status = true;
    	personAusgeliehen = person;
    	datumAusgeliehen = ausleihdatum;
    	std::cout << "Das Medium \" "<< titel << "\" wird an "<< person.getName() << "verliehen." << std::endl;
    	return true;



    }
    bool Magazin::zurueckgeben() {
    	if(!status) {
    		std::cout << "Das Magazin\""<<titel << "\" ist nicht ausgeliehen. " << std::endl;
    		return false;

    	}

    status = false;
    personAusgeliehen = Person();
    datumAusgeliehen = Datum();

    std::cout << "Das Magazin \"" << titel << "\" wurde zurückgeben." << std::endl;
    return true;


    }


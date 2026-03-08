/*
 * Buch.cpp
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */

#include "Buch.h"
#include "Datum.h"
#include <iostream>

Buch::Buch(const std::string& titel, const std::string& autor)
    : Medium(titel), autor(autor) {}

Buch::~Buch() {}

std::string Buch::getAutor() const {
    return autor;
}

void Buch::ausgabe() const {
    Medium::ausgabe(); // optional, eğer Medium::ausgabe() varsa
    std::cout << "Autor: " << autor << std::endl;
}
bool Buch::ausleihen(Person person, Datum ausleihdatum) {
    if (status) {
        std::cout << "Das Buch \"" << titel << "\" ist bereits verliehen!" << std::endl;
        return false;
    }

    status = true;
    personAusgeliehen = person;
    datumAusgeliehen = ausleihdatum;
    std::cout << "Das Buch \"" << titel << "\" wird an " << person.getName() << " verliehen." << std::endl;
    return true;
}
bool Buch::zurueckgeben()
{
	if(status)
	{
		status = false;
		std::cout << "Das Buch \""<< titel << "\" wurde zurueckgegeben." << std::endl;
		return true;
	}
	else
	{
		std::cout << "Das buch \""<< titel << "\" ist nicht verliehen!"<< std::endl;
		return false;
	}
}


/*
 * DVD.h
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */

/**
 * @file DVD.h
 * @brief Deklaration der Klasse DVD.
 * @date 28 Jun 2025
 * @author mervebasaran
 */
#ifndef DVD_H_
#define DVD_H_

#include "Medium.h"
#include <string>


/**
 * @class DVD
 * @brief Repräsentiert ein Medium vom Typ DVD mit Altersfreigabe und Genre.
 *
 * Diese Klasse erbt von der abstrakten Basisklasse Medium und implementiert
 * die spezifischen Methoden für eine DVD.
 */
class DVD: public virtual Medium {
private:

    /**
     * @brief Altersfreigabe für die DVD (z. B. ab 12).
     */
	int altersfreigabe;


    /**
     * @brief Genre der DVD (z. B. Action, Drama, Komödie).
     */
	std::string genre;
public:

    /**
     * @brief Konstruktor für ein DVD-Objekt.
     *
     * @param initTitel Titel der DVD.
     * @param initAltersfreigabe Altersfreigabe der DVD.
     * @param initGenre Genre der DVD.
     */
	DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre);


    /**
     * @brief Virtueller Destruktor.
     */
	virtual ~DVD();

    /**
     * @brief Gibt Informationen zur DVD auf dem Ausgabestream aus.
     *
     * Überschreibt die virtuelle Methode aus der Basisklasse Medium.
     */
	virtual void ausgabe() const override;

    /**
     * @brief Verleiht die DVD an eine Person ab einem bestimmten Datum.
     *
     * @param person Die Person, die die DVD ausleihen möchte.
     * @param ausleihdatum Das Datum des Ausleihvorgangs.
     * @return true, wenn das Ausleihen erfolgreich war; sonst false.
     */
	virtual bool ausleihen(Person person, Datum ausleihdatum) override;



    /**
     * @brief Gibt die DVD zurück.
     *
     * @return true, wenn das Zurückgeben erfolgreich war; sonst false.
     */
	virtual bool zurueckgeben() override;
};

#endif /* DVD_H_ */

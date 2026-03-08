/*
 * Magazin.h
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */


/**
 * @file Magazin.h
 * @brief Deklaration der Klasse Magazin.
 * @date 28 Jun 2025
 * @author mervebasaran
 */

#ifndef MAGAZIN_H
#define MAGAZIN_H

#include "Medium.h"
#include "Datum.h"
#include <string>



/**
 * @class Magazin
 * @brief Repräsentiert ein Magazin mit Ausgabedatum und Themengebiet.
 *
 * Diese Klasse erbt von der abstrakten Klasse Medium und implementiert
 * das Verhalten für ein Magazin-Medium wie Ausgabe, Ausleihe und Rückgabe.
 */
class Magazin : public Medium {
private:


    /**
     * @brief Erscheinungsdatum des Magazins.
     */
    Datum erscheinungsdatum;

    /**
     * @brief Themengebiet oder Sparte des Magazins (z. B. Sport, Wirtschaft).
     */
    std::string sparte;

public:

    /**
     * @brief Konstruktor für ein Magazin-Objekt.
     *
     * @param initTitel Titel des Magazins.
     * @param initDatumAusgabe Erscheinungsdatum.
     * @param initSparte Themengebiet.
     */
    Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte);

    /**
     * @brief Destruktor.
     */
    ~Magazin();



    /**
     * @brief Gibt Informationen über das Magazin auf dem Ausgabestream aus.
     *
     * Überschreibt die virtuelle Methode aus der Basisklasse Medium.
     */
    virtual void ausgabe() const override;

    /**
     * @brief Verleiht das Magazin an eine Person ab einem bestimmten Datum.
     *
     * @param person Die Person, die das Magazin ausleihen möchte.
     * @param ausleihdatum Das Datum des Ausleihvorgangs.
     * @return true, wenn das Ausleihen erfolgreich war; sonst false.
     */
    bool ausleihen(Person person, Datum ausleihdatum)  override;


    /**
     * @brief Gibt das Magazin zurück.
     *
     * @return true, wenn das Zurückgeben erfolgreich war; sonst false.
     */
    virtual bool zurueckgeben() override;
};

#endif

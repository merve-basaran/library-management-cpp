/*
 * Buch.h
 *
 *  Created on: 28 Jun 2025
 *      Author: mervebasaran
 */

#ifndef BUCH_H_
#define BUCH_H_

#include "Medium.h"
#include <string>
#include "Datum.h"


/**
 * @class Buch
 * @brief Repräsentiert ein Buch als Medium mit Autor.
 *
 * Diese Klasse erbt von der abstrakten Klasse Medium und implementiert
 * spezifisches Verhalten für Bücher wie ausleihen, zurückgeben und Ausgabe.
 */
class Buch : public virtual Medium {
private:
    /**
     * @brief Der Autor des Buches.
     */
    std::string autor;

public:
    /**
     * @brief Konstruktor für ein Buch.
     * @param titel Der Titel des Buches.
     * @param autor Der Autor des Buches.
     */
    Buch(const std::string& titel, const std::string& autor);

    /**
     * @brief Destruktor.
     */
    ~Buch();


    /**
     * @brief Gibt den Autor des Buches zurück.
     * @return Der Autor als std::string.
     */
    std::string getAutor() const;

    /**
     * @brief Gibt die Informationen des Buches auf dem Ausgabestream aus.
     *
     * Überschreibt die virtuelle Methode aus der Basisklasse Medium.
     */
    virtual void ausgabe() const override;

    /**
     * @brief Verleiht das Buch an eine Person ab einem bestimmten Datum.
     *
     * @param person Die Person, die das Buch ausleihen möchte.
     * @param ausleihdatum Das Datum des Ausleihvorgangs.
     * @return true, wenn das Ausleihen erfolgreich war; sonst false.
     */
    virtual bool ausleihen(Person person, Datum ausleihdatum) override;

    /**
     * @brief Gibt das Buch zurück.
     *
     * @return true, wenn das Zurückgeben erfolgreich war; sonst false.
     */
    virtual bool zurueckgeben() override;
};

#endif

#pragma once
#include <string>


class Animal {
    
    protected:
        std::string nom;
        float poids;
        
    public:
        Animal(std::string nom, float poids);
        virtual ~Animal(){};
        virtual float obtenirPoids();
        virtual void attribuerPoids(float poids);
        virtual std::string obtenirNom();
        virtual void attribuerNom(std::string nom);
        virtual void afficherInfos();
        virtual float obtenirDieteViande();
        virtual float obtenirDieteFruit();
        virtual float obtenirDieteHerbe();
        
};

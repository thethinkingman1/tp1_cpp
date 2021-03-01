#pragma once
#include<string>
#include "animal.h"
#include "diete.h"

class Rhinoceros : public Animal{
    
    private:
    
        int superficie_enclos;
        Diete diete_rhinoceros;

    public:

        //constructeur
        Rhinoceros(std::string nom, float poids, int superficie);    
        
        //Accesseurs
        float obtenirDieteViande();
        float obtenirDieteFruit();
        float obtenirDieteHerbe();
        
        //Afficher
        void afficherInfos();
	
};

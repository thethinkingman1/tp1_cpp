#pragma once
#include<string>
#include "animal.h"
#include "diete.h"


class Singe :public Animal {
    
    private:

        bool enclosAvecHerbe;
        
    public:

        Diete diete_singe;
        Singe(std::string nom, float poids, bool le_booleen);
        float obtenirDieteViande();
        float obtenirDieteFruit();
        float obtenirDieteHerbe();
        void afficherInfos();
        void afficherEnclos();
	
};

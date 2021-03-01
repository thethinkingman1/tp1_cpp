#pragma once
#include<string>
#include "animal.h"
#include "diete.h"
	

class Tigre :public Animal {

    protected:
        
        Diete diete_tigre;
        
    public:
        
        Tigre(std::string nom, float poids);
        float obtenirDieteViande();
        float obtenirDieteFruit();
        float obtenirDieteHerbe();
        void afficherInfos();
    
};

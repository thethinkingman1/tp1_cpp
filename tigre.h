#pragma once
#include<string>
#include "animal.h"
#include "diete.h"
	

class Tigre :public Animal {
	
	Diete diete_tigre;
    
public:
	
	Tigre(std::string nom, float poids);
    float getDieteViande();
    float getDieteFruits();
    float getDieteHerbe();
	void afficherInfos();
};

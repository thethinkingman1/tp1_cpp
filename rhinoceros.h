#pragma once
#include<string>
#include "animal.h"
#include "diete.h"

class Rhinoceros : public Animal{
private:
	int superficie_enclos;
	Diete diete_rhinoceros;
public:
	Rhinoceros(std::string nom, float poids, int superficie);
	
	std::string afficherInfos();
	
};
#pragma once
#include<string>
#include "animal.h"
#include "diete.h"
	

class Tigre :public Animal {
	
	Diete diete_tigre;
	
	Tigre(std::string nom, float poids);
	
	std::string afficherInfos();
};
#include "tigre.h"

Tigre::Tigre(std::string nom, float poids):Animal(nom,poids) {
	//La diete en viande du tigre dépend de son poids
	this->diete_tigre.definirDieteViande(poids*(1/100));
	
	// Le tigre est carnivore :
	this->diete_tigre.definirDieteHerbe(0);
	this->diete_tigre.definirDieteFruit(0);
	
};

std::string Tigre::afficherInfos(){
	return "";
}



#include "tigre.h"
#include <iostream>

Tigre::Tigre(std::string nom, float poids): Animal(nom,poids) {
    
	//La diete en viande du tigre dépend de son poids
	this->diete_tigre.definirDieteViande(poids*0.05);
	
	// Le tigre est carnivore :
	this->diete_tigre.definirDieteHerbe(0);
	this->diete_tigre.definirDieteFruit(0);
	
};

float Tigre::obtenirDieteViande(){
    
    return this->diete_tigre.recupererDieteViande();
    
}

float Tigre::obtenirDieteFruit(){
    
    return this->diete_tigre.recupererDieteFruit();
    
}
    
float Tigre::obtenirDieteHerbe(){
    
    return this->diete_tigre.recupererDieteHerbe();
    
}

void Tigre::afficherInfos(){
    
    std::cout << "Tigre : " << nom << " (" << poids << "kg)" <<std::endl;
    std::cout << this->diete_tigre.afficherDiete() << std::endl;
    std::cout << "" << std::endl;
    	
}



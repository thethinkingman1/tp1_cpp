
#include "animal.h"


Animal::Animal(std::string nom, float poids){
	this->nom = nom;
	this->poids = poids;
};


float Animal::Animal::obtenirPoids(){
	return this->poids;
};

void Animal::attribuerPoids(float poids){
	this->poids = poids;
};


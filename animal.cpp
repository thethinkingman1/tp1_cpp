#include "animal.h"


Animal::Animal(std::string nom, float poids) {
    
	this->nom = nom;
	this->poids = poids;
    
};


float Animal::Animal::obtenirPoids() {
    
	return this->poids;
    
};

void Animal::attribuerPoids(float poids) {
	
    this->poids = poids;

}

std::string Animal::Animal::obtenirNom() {
   
 return this->nom;

}

void Animal::attribuerNom(std::string nom) {
    
    this->nom = nom;

}

void Animal::afficherInfos() {
    
    //Implementer dans classes Filles
    
}

float Animal::obtenirDieteViande(){

    //Implementer dans classes Filles
    
}
    
float Animal::obtenirDieteFruit() {
    
    //Implementer dans classes Filles
    
}
    
float Animal::obtenirDieteHerbe(){
    
    //Implementer dans classes Filles
    
}


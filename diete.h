#pragma once
#include<string>


class Diete {
private:

	float poids_herbe;
	float poids_viande;
	float poids_fruit;

public:
	Diete(){};

	// accesseurs et mutateurs
	void definirDieteHerbe(float le_poids){this->poids_herbe = le_poids;}
	void definirDieteViande(float le_poids){this->poids_viande = le_poids;}
	void definirDieteFruit(float le_poids){this->poids_fruit = le_poids;}
	float recupererDieteHerbe(){return this->poids_herbe;}
	float recupererDieteViande(){return this->poids_viande;}
	float recupererDieteFruit(){return this->poids_fruit;}
	
	std::string afficherDiete();

};

#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string> 
#include "Person.h" 

using namespace std; 

class Employe: public Person
{
    
private: 
    string poste;
public:
    Employe(string nom, int age, string poste);
    string getPoste();
    void afficherInfo();
    ~Employe();

};

#endif // EMPLOYE_H

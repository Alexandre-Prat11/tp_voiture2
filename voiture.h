#pragma once
#include <string>

class CVoiture {
private:
    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;
    double posX;
    double posY;
    double kilometrageTotal;
public:
    CVoiture(std::string mar, std::string mod, int p, std::string carb);
    void demarrer();
    void arreter();
    void accelerer(int v);
    void ralentir(int v);
    void afficher();
    void deplacer(double deltaX, double deltaY);
    void afficherPosition();
    double getPosX();
    double getPosY();
    double getKilometrageTotal();
};
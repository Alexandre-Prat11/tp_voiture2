#include "voiture.h"
#include <iostream>
#include <cmath>

CVoiture::CVoiture(std::string mar, std::string mod, int p, std::string carb) {
    marque = mar;
    modele = mod;
    puissance = p;
    carburant = carb;
    vitesse = 0;
    posX = 0.0;
    posY = 0.0;
    kilometrageTotal = 0.0;
}

void CVoiture::demarrer() {
    vitesse = 0;
}

void CVoiture::arreter() {
    vitesse = 0;
}

void CVoiture::accelerer(int v) {
    vitesse += v;
}

void CVoiture::ralentir(int v) {
    vitesse -= v;
    if (vitesse < 0) {
        vitesse = 0;
    }
}

void CVoiture::afficher() {
    std::cout << marque << " " << modele << " | Carburant: " << carburant << " | Puissance: " << puissance << " ch | Vitesse: " << vitesse << " km/h" << std::endl;
}

void CVoiture::deplacer(double deltaX, double deltaY) {
    posX += deltaX;
    posY += deltaY;
    double distance = std::sqrt(deltaX * deltaX + deltaY * deltaY);
    kilometrageTotal += distance;
}

void CVoiture::afficherPosition() {
    std::cout << "Position X: " << posX << " km | Position Y: " << posY << " km | Total: " << kilometrageTotal << " km" << std::endl;
}

double CVoiture::getPosX() {
    return posX;
}

double CVoiture::getPosY() {
    return posY;
}

double CVoiture::getKilometrageTotal() {
    return kilometrageTotal;
}
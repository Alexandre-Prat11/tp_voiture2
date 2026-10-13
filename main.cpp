#include "voiture.h"

int main() {
    CVoiture voiture1("Peugeot", "208", 100, "Essence");
    CVoiture voiture2("Renault", "Zoe", 135, "Electrique");

    voiture1.afficher();
    voiture1.deplacer(-5.0, -2.0);
    voiture1.afficherPosition();

    voiture2.afficher();
    voiture2.deplacer(3.0, 4.0);
    voiture2.afficherPosition();

    return 0;
}
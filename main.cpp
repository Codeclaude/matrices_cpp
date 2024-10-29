#include <iostream>
#include"matrices.h"
int main() {
    double aa[3][3], bb[3][3], rr[3][3];
    int t;

    std::cout << "Entrez la taille des matrices (2 ou 3) : ";
    std::cin >> t;

    if (t != 2 && t != 3) {
        std::cout << "veuillez entrer une matrice de taille 2 ou 3" << std::endl;
        return 1;
    }

    std::cout << "saisie de la matrice A :\n";
    saisirmat(aa, t);

    std::cout << "saisie de la matrice B :\n";
    saisirmat(bb, t);

    std::cout << "la matrice A :" << std::endl;
    affmat(aa, t);

    std::cout << "la matrice B :" << std::endl;
    affmat(bb, t);

    std::cout << "l addition de A et B :" << std::endl;
    addmat(aa, bb, rr, t);
    affmat(rr, t);

    std::cout << "la soustraction de A et B :" << std::endl;
    submat(aa, bb, rr, t);
    affmat(rr, t);

    std::cout << "le produit de A et B :" << std::endl;
    mulmat(aa, bb, rr, t);
    affmat(rr, t);

    std::cout << "la transposee de A :" << std::endl;
    transpomat(aa, rr, t);
    affmat(rr, t);

    std::cout << "la trace de A : " << tracemat(aa, t) << std::endl;

    if (t == 2) {
        std::cout << "l inverse de A :" << std::endl;
        if (invmat(aa, rr)) {
            affmat(rr, t);
        } else {
            std::cout << "la matrice n est pas inversible." << std::endl;
        }
    }

    std::cout << "le determinant de A : " << detmat(aa, t) << std::endl;

    return 0;
}

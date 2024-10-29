#include<iostream>
#include"math.h"
void affmat(double m[3][3], int t) {
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < t; ++j) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void saisirmat(double m[3][3], int t) {
    std::cout << "entrez les elements de la matrice (" << t << "x" << t << ") :\n";
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < t; ++j) {
            std::cout << "element [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> m[i][j];
        }
    }
}

void addmat(double a[3][3], double b[3][3], double res[3][3], int t) {
    for (int i = 0; i < t; ++i)
        for (int j = 0; j < t; ++j)
            res[i][j] = a[i][j] + b[i][j];
}

void submat(double a[3][3], double b[3][3], double res[3][3], int t) {
    for (int i = 0; i < t; ++i)
        for (int j = 0; j < t; ++j)
            res[i][j] = a[i][j] - b[i][j];
}

void mulmat(double a[3][3], double b[3][3], double res[3][3], int t) {
    for (int i = 0; i < t; ++i)
        for (int j = 0; j < t; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < t; ++k)
                res[i][j] += a[i][k] * b[k][j];
        }
}

void transpomat(double a[3][3], double res[3][3], int t) {
    for (int i = 0; i < t; ++i)
        for (int j = 0; j < t; ++j)
            res[j][i] = a[i][j];
}

double detmat(double a[3][3], int t) {
    if (t == 2) {
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    } else if (t == 3) {
        return a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
             - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
             + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    }
    return 0;
}

bool invmat(double a[3][3], double res[3][3]) {
    double d = detmat(a, 2);
    if (d == 0) {
        return false;
    }

    res[0][0] = a[1][1] / d;
    res[0][1] = -a[0][1] / d;
    res[1][0] = -a[1][0] / d;
    res[1][1] = a[0][0] / d;

    return true;
}

double tracemat(double a[3][3], int t) {
    double tr = 0;
    for (int i = 0; i < t; ++i)
        tr += a[i][i];
    return tr;
}

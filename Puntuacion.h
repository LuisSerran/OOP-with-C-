#pragma once
#include <iostream>
#include <iomanip>


class Puntuacion {

        std::string nombre;
        int ep1;
        int ep2;
        int ep3;
        int ep4;
        int ep5;
        int ep6;

public:
           Puntuacion();
           Puntuacion(const std::string& nombre, int ep1, int ep2, int ep3, int ep4, int ep5, int ep6);


           friend std::ostream& operator<<(std::ostream &os, const Puntuacion& p); //sobrecarga de <<
            

};


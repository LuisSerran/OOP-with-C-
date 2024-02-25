#include "Puntuacion.h"



Puntuacion::Puntuacion(const std::string& nombre, int ep1, int ep2, int ep3, int ep4, int ep5, int ep6): nombre(nombre), ep1(ep1), ep2(ep2), ep3(ep3), ep4(ep4), ep5(ep5), ep6(ep6) {}
 
std::ostream&  operator<<(std::ostream& os, const Puntuacion& p) { //os en lugar de cout
    os << std::left;
    os << std::setw(20) << p.nombre;
    os << std::setw(12) << p.ep1;
    os << std::setw(12) << p.ep2;
    os << std::setw(12) << p.ep3; 
    os << std::setw(12) << p.ep4; 
    os << std::setw(12) << p.ep5; 
    os << std::setw(12) << p.ep6; 

    return os;

}


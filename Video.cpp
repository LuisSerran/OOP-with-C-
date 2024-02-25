#include "Video.h"
#include <iostream>

Video::Video(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma):nombre(nombre), genero(genero), anio(anio), duracion(duracion), presupuesto(presupuesto), plataforma(plataforma) {}

Video::~Video() {}

void Video:: mostrarDatos() const{
    std::cout << "Nombre: " <<nombre<< std::endl;
    std::cout << "Género: " <<genero<< std::endl;
    std::cout << "Año:  " <<anio<< std::endl;
    std::cout << "Duración: "<<duracion<< std::endl;
    std::cout << "Presupuesto: "<<presupuesto<< std::endl;
    std::cout << "Plataforma: "<<plataforma<<std::endl;

}

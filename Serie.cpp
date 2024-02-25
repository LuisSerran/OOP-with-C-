#include "Serie.h"
#include <iostream>

Serie::Serie(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma, int temporadas, int capitulos) 
    : Video(nombre, genero, anio, duracion, presupuesto, plataforma), temporadas(temporadas), capitulos(capitulos) {}

void Serie::mostrarDatos() const{
    std::cout << "\nDatos generales\n" << std::endl;
    Video::mostrarDatos();
    std::cout << "Temporadas: " <<temporadas<< std::endl;
    std::cout << "Total de capitulos: " <<capitulos<< std::endl;
}

void Serie::califica(int calif) {
    std::cout << "Gracias por calificar la serie con " <<calif<< " estrellas!!" << std::endl;
}


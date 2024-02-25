#include "Pelicula.h"
#include <iostream>

Pelicula::Pelicula(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma, int nominaciones, const std::string& taquilla) 
    : Video(nombre, genero, anio, duracion, presupuesto, plataforma), nominaciones(nominaciones), taquilla(taquilla) {}

void Pelicula::mostrarDatos() const {
    std::cout << "\nDatos Generales\n" << std::endl;
    Video::mostrarDatos();
    std::cout << "Nominaciones: " <<nominaciones<< std::endl;
    std::cout << "Taquilla final: "<<taquilla<< std::endl;
}

void Pelicula::califica(int calif) {
    std::cout << "Gracias por calificar la pelicula con " <<calif<< " estrellas!!" << std::endl;

}
#pragma once
#include "Video.h"

class Pelicula : public Video {
    public:
           Pelicula(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma, int nominaciones, const std::string& taquilla);
           void mostrarDatos() const override;

           void califica(int calif) override;

           

    private:
           int nominaciones;
           const std::string taquilla;
};
#pragma once
#include "Video.h"

class Serie : public Video{
    public:
           Serie(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma, int temporadas, int capitulos);
           void mostrarDatos() const override;//para sobreescribir en ella

           void califica(int calif) override;


    private: 
           int temporadas;
           int capitulos;
           

};



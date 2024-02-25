#pragma once
#include <string>

class Video {
    public: 
           Video(const std::string& nombre, const std::string& genero, int anio, const std::string& duracion, const std::string& presupuesto, const std::string& plataforma);
           virtual ~Video();
           virtual void mostrarDatos() const;

           virtual void califica(int calif) = 0;


    protected:
           std::string nombre;
           std::string genero;
           int anio;
           std::string duracion;
           std::string presupuesto;
           std::string plataforma;
};
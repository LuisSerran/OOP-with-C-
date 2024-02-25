#include "Help.h"
#include <iostream>
#include <fstream>

void Help::imprimirContenido(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        std::cout << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    std::string linea;
    while (getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }

    archivo.close();
}
    


    
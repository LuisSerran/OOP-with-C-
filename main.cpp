#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Help.h"
#include "Puntuacion.h"
#include <vector>
#include <iostream>
#include <stdexcept>

int main() {
    Help Info; //nos permitira imprimir las calificaciones
    Puntuacion p01("Breaking Bad", 7, 8, 6, 9, 7, 10); 
    Puntuacion p02("Invincible", 10, 9, 8, 9, 8, 10);
    Puntuacion p03("The boys", 8, 8, 9, 7, 10, 10);


    std::vector<Video*> videos;//creacion de vector para almacenar los videos

    videos.push_back(new Pelicula("Forrest Gump", "Comedia", 1994, "124 min", "$55 millones", "Paramount+", 5, "$677 millones" ));
    videos.push_back(new Pelicula("Top Gun: Maverick", "Acción", 2020, "130 min", "$170 millones", "Paramount+", 3, "$1493 millones" ));
    videos.push_back(new Pelicula("The Godfather", "Drama", 1972, "175 min", "$100 millones", "Star+", 4, "$1,000 millones" ));
    videos.push_back(new Serie("Breaking Bad", "Drama", 2008, "50 min c/episodio", "$3.5 millones c/episodio", "Netflix", 5, 62));
    videos.push_back(new Serie("Invincible", "Acción", 2021, "42 min c/episodio", "$6 millones", "Prime Video", 2, 12));
    videos.push_back(new Serie("The boys", "Comedia", 2022, "58 min c/episodio", "$11.2 millones", "Prime Video", 3, 24));

    
    
    int opcion;
    do {
        std::cout << "\n----------- MENÚ ----------- " << std::endl;
        std::cout << "Opción 1 Datos Generales" << std::endl;
        std::cout << "Opción 2 Explorar por género" << std::endl;
        std::cout << "Opción 3 Episodios calificados" << std::endl;
        std::cout << "Opción 4 Califique un video" << std::endl;
        std::cout << "Opción 5 Cerrar Sesión" << std::endl;
        std::cout << "------------------------------\n " << std::endl;
        

        try {//uso de excepciones try-catch
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        if (std::cin.fail() || opcion < 1 || opcion > 5) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::invalid_argument("Opción no válida.");
        }

        switch (opcion) {//ejecutara de acuerdo a la eleccion del usuario
            case 1:
                int consultaVideo;
                std::cout << "\n¿Qué desea consultar? " << std::endl;
                std::cout << "Peliculas (1)" << std::endl;
                std::cout << "Series    (2)" << std::endl;
                std::cin >> consultaVideo;

                if (consultaVideo == 1) {
                    int numeroUsuario;
                    std::cout << "Forrest Gump      (1)" << std::endl;
                    std::cout << "Top Gun: Maverick (2)" << std::endl;
                    std::cout << "The Godfather     (3)" << std::endl;
                    std::cin >> numeroUsuario;

                    int indiceVideo = numeroUsuario - 1;//-1 para acceder al indice y  a su vez facilitar la eleccion del usuario
                    
                        if (indiceVideo >= 0 && indiceVideo < videos.size()) {
                            videos[indiceVideo]->mostrarDatos();
                        } else {
                            std::cout << "Opción no válida." << std::endl;
                        }
                }
                else if (consultaVideo == 2){
                    int numeroUsuario;
                    std::cout << "Breaking bad (4) " << std::endl;
                    std::cout << "Invincible   (5)" << std::endl;
                    std::cout << "The Boys     (6)" << std::endl;
                    std::cin >> numeroUsuario;

                    int indiceVideo = numeroUsuario - 1;

                        if (indiceVideo >= 0 && indiceVideo < videos.size()) {
                            videos[indiceVideo]->mostrarDatos();// se puede (*videos[indiceVideo]).mostrarDatos(); pero es m[as legible con ->

                        } else {
                            std::cout << "Opción no válida." << std::endl;
                        }
                
                }         
                
                break;
                
            case 2:
                int genreView;
                std::cout << "\nComedia   (1)" << std::endl;
                std::cout << "Acción    (2)" << std::endl;
                std::cout << "Drama     (3)" << std::endl;
                std::cin >> genreView;

                switch (genreView) {
                    case 1:
                        Info.imprimirContenido("comedy.txt"); //la clase Help nos ayuda a imprimir los archivos de texto
                        break;
                    case 2:
                        Info.imprimirContenido("action.txt");
                        break;
                    case 3:
                        Info.imprimirContenido("drama.txt");
                        break;
                    default:
                        std::cout << "Opción no válida." << std::endl;
                        break;
                }
                break;

            case 3:
                std::cout << std::setw(6) << "Nombre"; // titulos
                std::cout << std::setw(17) << "Cap. 1";
                std::cout << std::setw(12) << "Cap. 2";
                std::cout << std::setw(11) << "Cap. 3";
                std::cout << std::setw(13) << "Cap. 4";
                std::cout << std::setw(12) << "Cap. 5";
                std::cout << std::setw(14) << "Cap. 6" << std::endl;
                std::cout << p01 << std::endl; // calificaciones, de l clase puntuacion
                std::cout << p02 << std::endl;
                std::cout << p03 << std::endl;

                break;

            case 4:
                int calificaVideo;
                std::cout << "¿Qué deseas calificar? " << std::endl;
                std::cout << "Peliculas (1)" << std::endl;
                std::cout << "Series    (2)" << std::endl;
                std::cin >> calificaVideo;

                int calificacion;
                std::cout << "Ingrese la calificación que le pondrá a su video: ";
                std::cin >> calificacion;

                if (calificaVideo == 1) {
                    int grade;
                    std::cout << "Forrest Gump      (1)" << std::endl;
                    std::cout << "Top Gun: Maverick (2)" << std::endl;
                    std::cout << "The Godfather     (3)" << std::endl;
                    std::cin >> grade;
                         if (grade >= 1 && grade <= 3) {
                             videos[grade - 1]->califica(calificacion);
                         } else {
                             std::cout << "Opción no válida." << std::endl;
                         }
                } else if (calificaVideo == 2) {
                    int tvgrade;
                    std::cout << "Breaking Bad    (4)" << std::endl;
                    std::cout << "Invincible      (5)" << std::endl;
                    std::cout << "The Boys        (6)" << std::endl;
                    std::cin >> tvgrade;
                        if (tvgrade >= 4 && tvgrade <= 6) {
                            videos[tvgrade - 1]->califica(calificacion);
                        } else {
                            std::cout << "Opción no válida." << std::endl;
                        }
                } else {
                    std::cout << "Opción no válida." << std::endl;
                }
                break;




        } 
            } catch (const std::exception& e) 
            {
                 std::cerr << "Error: " << e.what() << std::endl;
            }
    } while (opcion != 5);//bucle que acaba cuando el usuario oprime 5

    
    for (const auto& video : videos) { // Liberar la memoria de los objetos en el vector
        delete video;
    }
    
    return 0;
}


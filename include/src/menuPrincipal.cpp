#pragma once
#include "menuPrincipal.h"
#include "ProductoMenu.h"
#include "ProductoManager.h"
#include "programa.h"
#include <iostream>


menuPrincipal::menuPrincipal()
{

 }

void menuPrincipal::mostrar()

{
    system("cls");
    std::cout<< "Bienvenido al Men� "<<std::endl;
    std::cout<< "1. Menu Producto"<<std::endl;
    std::cout<< "2. Opci�n 2"<<std:: endl;
    std::cout<< "3. Opci�n 3"<<std::endl;
    std::cout<< "4. Salir"<<std::endl;
}

int menuPrincipal::leerOpcion()
{
    std::cout<<"Elija una opcion"<<std::endl;
    std::cin>>_opcion;


    int opcion = _opcion ;
    return opcion;
}

void menuPrincipal::ejecutar()
{
     switch (_opcion) {
      case 1:


        ///std::cout << "Ha seleccionado la opci�n 1" << std::endl;
        break;
      case 2:
        std::cout << "Ha seleccionado la opci�n 2" << std::endl;
        break;
      case 3:
        std::cout << "Ha seleccionado la opci�n 3" << std::endl;
        break;
      case 4:
        std::cout << "Saliendo del programa..." << std::endl;
        break;
      default:
        std::cout << "Opci�n inv�lida" << std::endl;
        break;
    }
  }


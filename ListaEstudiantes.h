/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaEstudiantes.h
 * Author: Steven
 *
 * Created on July 12, 2018, 8:02 PM
 */

#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H
#include <string>
#include "NodoEstudiante.h"
#include <cstdlib>

using namespace std;

class ListaEstudiantes{
public:
    ListaEstudiantes();
    void setCabeza(NodoEstudiante* nuevo);
    NodoEstudiante* getCabeza();
    virtual ~ListaEstudiantes();
    void insertar(Estudiante nuevo);
    string mostrar();
    Estudiante buscar(string);
    bool isExisteEstudiante(string);
    bool insertarNota(string, int);
    int size();
    bool esVacia();
private:
    NodoEstudiante* cabeza;
};

#endif /* LISTAESTUDIANTES_H */


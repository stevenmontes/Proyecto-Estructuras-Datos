/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaEstudiantes.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 8:02 PM
 */

#include "ListaEstudiantes.h"
#include <sstream>

ListaEstudiantes::ListaEstudiantes() {
    setCabeza(NULL);
}

ListaEstudiantes::~ListaEstudiantes() {
}

bool ListaEstudiantes::esVacia() {
    return getCabeza() == NULL;
}

void ListaEstudiantes::setCabeza(NodoEstudiante* nuevo) {
    cabeza = nuevo;
}

NodoEstudiante* ListaEstudiantes::getCabeza() {
    return cabeza;
}

void ListaEstudiantes::insertar(Estudiante nuevoEstudiante) {
    NodoEstudiante* nuevo = new NodoEstudiante();
    nuevo->setInfo(nuevoEstudiante);

    if (!esVacia()) {
        nuevo->setSiguiente(getCabeza());
    }

    setCabeza(nuevo);
}

string ListaEstudiantes::mostrar() {
    stringstream contenido;
    NodoEstudiante* aux = getCabeza();
    int cont = 0;

    while (aux != NULL) {
        contenido << "Estudiante: " << (++cont) << " " << aux->getInfo().toString() << "\n";
        aux = aux->getSiguiente();
    }

    return contenido.str();
}

Estudiante ListaEstudiantes::buscar(string dato) {
    NodoEstudiante* aux = getCabeza();
    Estudiante encontrado;

    if (esVacia()) {
        return encontrado;
    }

    while (aux != NULL) {
        if (aux->getInfo().getCedula() == dato) {
            encontrado = aux->getInfo();
            break;
        }
        aux = aux->getSiguiente();
    }

    return encontrado;
}


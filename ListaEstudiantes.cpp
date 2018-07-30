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

    if (esVacia()) {
        return "La lista est\u00e1 vac\u00eda \n";
    }

    while (aux != NULL) {
        contenido << (++cont) << "-"
                << aux->getInfo().toString() << "\n";
        aux = aux->getSiguiente();
    }

    return contenido.str();
}

string ListaEstudiantes::mostrarConNota() {
    stringstream contenido;
    NodoEstudiante* aux = getCabeza();
    int cont = 0;

    if (esVacia()) {
        return "La lista est\u00e1 vac\u00eda \n";
    }

    while (aux != NULL) {
        contenido << (++cont)  << "-"
                << " Cedula: " << aux->getInfo().getCedula()
                << " Primer nombre: " << aux->getInfo().getPrimerNombre()
                << " Primer apellido: " << aux->getInfo().getSegundoApellido()
                << " Nota: " << aux->getNotaFinal()
                << "\n";
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

bool ListaEstudiantes::isExisteEstudiante(string cedula) {
    NodoEstudiante* aux = getCabeza();

    while (aux != NULL) {
        if (aux->getInfo().getCedula() == cedula) {
            return true;
        }
        aux = aux->getSiguiente();
    }

    return false;
}

bool ListaEstudiantes::insertarNota(string cedula, int nota) {
    NodoEstudiante* aux = getCabeza();

    while (aux != NULL) {
        if (aux->getInfo().getCedula() == cedula) {
            aux->setNotaFinal(nota);
            return true;
        }
        aux = aux->getSiguiente();
    }

    return false;

}

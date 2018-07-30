/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCursos.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 9:19 PM
 */

#include "ListaCursos.h"
#include <sstream>

ListaCursos::ListaCursos() {
    setCabeza(NULL);
}

ListaCursos::~ListaCursos() {

}

bool ListaCursos::esVacia() {
    return getCabeza() == NULL;
}

void ListaCursos::setCabeza(NodoCurso* nuevo) {
    cabeza = nuevo;
}

NodoCurso* ListaCursos::getCabeza() {
    return cabeza;
}

void ListaCursos::insertar(Curso nuevoCurso) {
    NodoCurso* nuevo = new NodoCurso();
    nuevo->setInfo(nuevoCurso);

    if (!esVacia()) {
        nuevo->setSiguiente(getCabeza());
    }

    setCabeza(nuevo);
}

string ListaCursos::mostrar() {
    stringstream contenido;
    NodoCurso* aux = getCabeza();
    int cont = 0;
    
    if (esVacia()) {
        return "La lista est\u00e1 vac\u00eda \n";
    }

    while (aux != NULL) {
        contenido << "Curso: " << (++cont) << " "
                << aux->getInfo()->toString() << "\n";
        aux = aux->getSiguiente();
    }

    return contenido.str();
}

Curso* ListaCursos::buscar(string dato) {
    NodoCurso* aux = getCabeza();

    if (esVacia()) {
        return NULL;
    }

    while (aux != NULL) {
        if (aux->getInfo()->getCodigo() == dato) {
            return aux->getInfo();
        }
        aux = aux->getSiguiente();
    }

    return NULL;
}

string ListaCursos::obtenerCursosMatriculados(string cedula){
    NodoCurso* aux = getCabeza();
    bool existe = false;
    int cont = 0;
    stringstream cursosMatriculados;
    
    if (esVacia()) {
        return "La lista est\u00e1 vac\u00eda \n";
    }
    
    while(aux != NULL){
        existe = aux->getInfo()->getListaEstudiantes().isExisteEstudiante(cedula);
        if(existe){
            cursosMatriculados << (++cont) << "- Nombre del curso: " 
                    << aux->getInfo()->getNombre() << "\n";
        }
        aux = aux->getSiguiente();
    }
    
    return cursosMatriculados.str();
}
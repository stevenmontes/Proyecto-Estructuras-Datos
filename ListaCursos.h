/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCursos.h
 * Author: Steven
 *
 * Created on July 12, 2018, 9:19 PM
 */

#ifndef LISTACURSOS_H
#define LISTACURSOS_H
#include <string>
#include "NodoCurso.h"
#include "Curso.h"

using namespace std;

class ListaCursos{
public:
    ListaCursos();
    virtual ~ListaCursos();
    void setCabeza(NodoCurso*);
    NodoCurso* getCabeza();
    void insertar(Curso nuevo);
    string mostrar();
    Curso* buscar(string);
    string obtenerCursosMatriculados(string cedula);
    bool esVacia();
private:
    NodoCurso* cabeza;
};

#endif /* LISTACURSOS_H */


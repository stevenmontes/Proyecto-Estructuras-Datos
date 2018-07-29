/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoEstudiante.h
 * Author: Steven
 *
 * Created on July 12, 2018, 7:21 PM
 */

#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H
#include "Estudiante.h"

class NodoEstudiante {
public:
    NodoEstudiante();
    virtual ~NodoEstudiante();
    void setSiguiente(NodoEstudiante* nuevo);
    void setInfo(Estudiante nuevo);
    void setNotaFinal(int notaFinal);
    Estudiante getInfo();
    int getNotaFinal();
    NodoEstudiante* getSiguiente();
private:
    NodoEstudiante* siguiente;
    Estudiante estudiante; 
    int notaFinal;
};

#endif /* NODOESTUDIANTE_H */


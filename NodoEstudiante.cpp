/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoEstudiante.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 7:21 PM
 */

#include "NodoEstudiante.h"

NodoEstudiante::NodoEstudiante() {
    setSiguiente(NULL);
    setNotaFinal(0);
}

NodoEstudiante::~NodoEstudiante(){
    
}

void NodoEstudiante::setInfo(Estudiante nuevo){
    this->estudiante = nuevo;
}

void NodoEstudiante::setNotaFinal(int notaFinal){
    this->notaFinal = notaFinal;
}

void NodoEstudiante::setSiguiente(NodoEstudiante* nuevo){
    this->siguiente = nuevo;
}

Estudiante NodoEstudiante::getInfo(){
    return estudiante;
}

int NodoEstudiante::getNotaFinal(){
    return notaFinal;
}

NodoEstudiante* NodoEstudiante::getSiguiente(){
    return siguiente;
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCurso.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 8:21 PM
 */

#include "NodoCurso.h"

NodoCurso::NodoCurso() {
    setSiguiente(NULL);
}

NodoCurso::~NodoCurso(){
    
}

void NodoCurso::setInfo(Curso nuevoCurso){
    curso = nuevoCurso;
}

Curso* NodoCurso::getInfo(){
    return &curso;
}

void NodoCurso::setSiguiente(NodoCurso* nuevo){
    siguiente = nuevo;
}

NodoCurso* NodoCurso::getSiguiente(){
    return siguiente;
}


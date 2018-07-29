/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCurso.h
 * Author: Steven
 *
 * Created on July 12, 2018, 8:21 PM
 */

#ifndef NODOCURSO_H
#define NODOCURSO_H
#include "Curso.h"
#include <cstdlib>

class NodoCurso{
public:
    NodoCurso();
    virtual ~NodoCurso();
    void setSiguiente(NodoCurso* nuevo);
    void setInfo(Curso nuevoCurso);
    Curso getInfo();
    NodoCurso* getSiguiente();
private:
    NodoCurso* siguiente;
    Curso curso;
};

#endif /* NODOCURSO_H */


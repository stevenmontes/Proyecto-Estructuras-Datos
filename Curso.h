/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Curso.h
 * Author: Steven
 *
 * Created on July 12, 2018, 8:05 PM
 */

#ifndef CURSO_H
#define CURSO_H
#include "ListaEstudiantes.h"
#include <string>
#include <cstdlib>

using namespace std;

class Curso {
public:
    Curso();
    Curso(string, string, string, string, string);
    virtual ~Curso();
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setAula(string aula);
    void setListaEstudiantes(ListaEstudiantes listaNueva);
    void setHorario(string nuevoHorario);
    void setDiaSemanal(string nuevoDiaSemanal);
    string getCodigo();
    string getNombre();
    string getAula();
    ListaEstudiantes getListaEstudiantes();
    string getHorario();
    string getDiaSemanal();
    string toString();
    
private:
    string codigo = "";
    string nombre = "";
    string aula = "";
    ListaEstudiantes listaEstudiantes;
    string horario = "";
    string diaSemanal = "";
};

#endif /* CURSO_H */


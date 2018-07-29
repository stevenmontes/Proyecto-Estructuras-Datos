/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Curso.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 8:05 PM
 */

#include "Curso.h"
#include "ListaEstudiantes.h"
#include <string>
#include <sstream>

using namespace std;

Curso::Curso() {
    setCodigo("");
    setNombre("");
    setAula("");
    setHorario("");
    setDiaSemanal("");
}

Curso::~Curso() {
}

void Curso::setCodigo(string codigo){
    this->codigo = codigo;
}

void Curso::setNombre(string nombre){
    this->nombre = nombre;
}

void Curso::setAula(string aula){
    this->aula = aula;
}

void Curso::setListaEstudiantes(ListaEstudiantes listaNueva){
    this->listaEstudiantes = listaNueva;
}

void Curso::setHorario(string nuevoHorario){
    this->horario = nuevoHorario;
}

void Curso::setDiaSemanal(string nuevoDiaSemanal){
    this->diaSemanal = nuevoDiaSemanal;
}

string Curso::getCodigo(){
    return codigo;
}

string Curso::getNombre(){
    return nombre;
}

string Curso::getAula(){
    return aula;
}

ListaEstudiantes Curso::getListaEstudiantes(){
    return listaEstudiantes;
}

string Curso::getHorario(){
    return horario;
}

string Curso::getDiaSemanal(){
    return diaSemanal;
}

string Curso::toString(){
    stringstream contenido;
    contenido << "-Codigo: " << codigo << " -" 
              << "Nombre: " << nombre << " -"
              << "Numero aula:" << aula << " -"
              << "Horario:" << horario << " -"
              << "Dia semanal: "<< diaSemanal << "\n";
    return contenido.str();
}



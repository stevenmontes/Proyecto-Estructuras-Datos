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
    setHorario("");
    setDiaSemanal("");
}

Curso::Curso(string codigo, string nombre, string horario, string dia,
        Aula clase) {
    setCodigo(codigo);
    setNombre(nombre);
    setHorario(horario);
    setDiaSemanal(dia);
    setAula(clase);
}

Curso::~Curso() {
}

void Curso::setCodigo(string codigo){
    this->codigo = codigo;
}

void Curso::setNombre(string nombre){
    this->nombre = nombre;
}

void Curso::setAula(Aula aula){
    this->clase = aula;
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

Aula Curso::getAula(){
    return clase;
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
    contenido << "-C\u00f3digo: " << codigo << " -" 
              << "Nombre: " << nombre << " -"
              << "N\u00famero aula: " << clase.getNumero() << " -"
              << "Horario: " << horario << " -"
              << "D\u00eda semanal: "<< diaSemanal << "\n";
    return contenido.str();
}



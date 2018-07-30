/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudiante.cpp
 * Author: Steven
 * 
 * Created on July 12, 2018, 7:24 PM
 */

#include "Estudiante.h"
#include <string>
#include <sstream>

using namespace std;

Estudiante::Estudiante() {
    setCedula("");
    setPrimerNombre("");
    setSegundoNombre("");
    setPrimerApellido("");
    setSegundoApellido("");
}

Estudiante::~Estudiante() {
}

Estudiante::Estudiante(string ced, string nom1, string nom2, string ape1, string ape2){
    setCedula(ced);
    setPrimerNombre(nom1);
    setSegundoNombre(nom2);
    setPrimerApellido(ape1);
    setSegundoApellido(ape2);
}

void Estudiante::setCedula(string cedula){
    this->cedula = cedula;
}

void Estudiante::setPrimerNombre(string primerNombre){
    this->primerNombre = primerNombre;
}

void Estudiante::setSegundoNombre(string segundoNombre){
    this->segundoNombre = segundoNombre;
}

void Estudiante::setPrimerApellido(string primerApellido){
    this->primerApellido = primerApellido;
}

void Estudiante::setSegundoApellido(string segundoApellido){
    this->segundoApellido = segundoApellido;
}

string Estudiante::getCedula(){
    return cedula;
}

string Estudiante::getPrimerNombre(){
    return primerNombre;
}

string Estudiante::getSegundoNombre(){
    return segundoNombre;
}

string Estudiante::getPrimerApellido(){
    return primerApellido;
}

string Estudiante::getSegundoApellido(){
    return segundoApellido;
}

string Estudiante::toString(){
    stringstream contenido;
    contenido << "-C\u00e9dula: " << cedula << " -"
              << "Primer nombre: " << primerNombre << " -"
              << "Segundo nombre:" << segundoNombre << " -"
              << "Primer apellido: " << primerApellido << " -"
              << "Segundo apellido: "<< segundoApellido << "\n";
    return contenido.str();
}
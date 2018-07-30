/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aula.cpp
 * Author: Steven
 * 
 * Created on 29 de julio de 2018, 07:00 PM
 */

#include "Aula.h"
#include <string>
#include <sstream>
using namespace std;

Aula::Aula() {
    setNumero("");
    setEstado(true);
}

Aula::Aula(string numero, bool estado){
    setNumero(numero);
    setEstado(estado);
}

Aula::~Aula() {
}

void Aula::setEstado(bool nuevo){
    estado = nuevo;
}

void Aula::setNumero(string nuevo){
    numero = nuevo;
}

bool Aula::getEstado(){
    return estado;
}

string Aula::getNumero(){
    return numero;
}

string Aula::toString(){
    stringstream contenido;
    contenido << "N\u00famero: " << numero << "Estado: " << estado;
    return contenido.str();
}


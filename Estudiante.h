/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudiante.h
 * Author: Steven
 *
 * Created on July 12, 2018, 7:24 PM
 */

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <cstdlib>

using namespace std;

class Estudiante {
public:
    Estudiante();
    Estudiante(string, string, string ,string, string);
    virtual ~Estudiante();
    void setCedula(string cedula);
    void setPrimerNombre(string primerNombre);
    void setSegundoNombre(string segundoNombre);
    void setPrimerApellido(string primerApellido);
    void setSegundoApellido(string segundoApellido);
    string getCedula();
    string getPrimerNombre();
    string getSegundoNombre();
    string getPrimerApellido();
    string getSegundoApellido();
    string toString();
private:
    string cedula = "";
    string primerNombre = "";
    string segundoNombre = "";
    string primerApellido = "";
    string segundoApellido = "";
};

#endif /* ESTUDIANTE_H */


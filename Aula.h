/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aula.h
 * Author: Steven
 *
 * Created on 29 de julio de 2018, 07:00 PM
 */

#ifndef AULA_H
#define AULA_H
#include <string>

using namespace std;

class Aula {
public:
    Aula();
    Aula(string, bool);
    virtual ~Aula();
    void setNumero(string);
    void setEstado(bool);
    string getNumero();
    bool getEstado();
    string toString();
private:
    string numero;
    bool estado;
};

#endif /* AULA_H */


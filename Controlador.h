/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Controlador.h
 * Author: Steven
 *
 * Created on 27 de julio de 2018, 04:44 PM
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <string>
#include "Curso.h"
#include "Estudiante.h"

using namespace std;

class Controlador {
public:
    Controlador();
    Controlador(const Controlador& orig);
    virtual ~Controlador();
    string ingresarCurso(string*, string*, string* ,string*, string*);
    string ingresarEstudiante(string*, string*, string*, string* ,string*);
    string matricularEstudiante(string*, string*);
    string mostrarEstudiantesPorCurso(string*);
    string mostrarCursosPorEstudiante(string*);
    string mostrarCursos();
    string mostrarEstudiantes();
    string mostrarEstudiantesConNotas(string*);
    string buscarEstudiante(string*);
    string buscarCurso(string*);
    string insertarNota(string* cedula, string* codigo, int* nota);
    void inicializarAulas();
    bool esAulaDisponible(string aula);
    string cambiarEstadoAula(string aula);
    bool validarAulasDisponibles();
    string mostrarAulas();
private:

};

#endif /* CONTROLADOR_H */


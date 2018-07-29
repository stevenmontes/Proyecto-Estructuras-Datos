/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Controlador.cpp
 * Author: Steven
 * 
 * Created on 27 de julio de 2018, 04:44 PM
 */

#include "Controlador.h"
#include "ListaCursos.h"
#include "ListaEstudiantes.h"

static ListaCursos listaCursos;
static ListaEstudiantes listaGeneralEstudiantes;

Controlador::Controlador() {
}

Controlador::Controlador(const Controlador& orig) {
}

Controlador::~Controlador() {
}

string Controlador::ingresarCurso(string* codigo, string* nombre,
        string* aula, string* horario, string* dia) {
    Curso nuevo(*codigo, *nombre, *aula, *horario, *dia);
    listaCursos.insertar(nuevo);
    return "Se registr\u00f3 correctamente \n";
}

string Controlador::ingresarEstudiante(string* cedula, string* nom1, string* nom2,
        string* ape1, string* ape2) {
    Estudiante nuevo(*cedula, *nom1, *nom2, *ape1, *ape2);
    listaGeneralEstudiantes.insertar(nuevo);
    return "Se registr\u00f3 correctamente \n";
}

string Controlador::matricularEstudiante(string* cedula, string* codCurso) {
    Estudiante nuevoAlumno = listaGeneralEstudiantes.buscar(*cedula);
    Curso* curso = listaCursos.buscar(*codCurso);

    if (nuevoAlumno.getCedula() == "") {
        return "El estudiante no existe en el sistema \n";
    } else if (curso->getCodigo() != "") {
        ListaEstudiantes update = curso->getListaEstudiantes();
        update.insertar(nuevoAlumno);
        curso->setListaEstudiantes(update);
        return "El estudiante se matricul\u00f3 con \u00e9xito \n";
    } else {
        return "El curso no existe en el sistema. \n";
    }
}

string Controlador::mostrarEstudiantesPorCurso(string* codCurso) {
    Curso* curso = listaCursos.buscar(*codCurso);
    return curso->getListaEstudiantes().mostrar();
}

string Controlador::mostrarCursosPorEstudiante(string* cedAlumno) {
    return listaCursos.obtenerCursosMatriculados(*cedAlumno);
}

string Controlador::mostrarEstadosEstudiantes() {
}

string Controlador::mostrarCursos() {
    return listaCursos.mostrar();
}

string Controlador::mostrarEstudiantes() {
    return listaGeneralEstudiantes.mostrar();
}

string Controlador::buscarCurso(string* codigo) {
    Curso* nuevo = listaCursos.buscar(*codigo);
    return nuevo->toString();
}

string Controlador::buscarEstudiante(string* cedula) {
    Estudiante nuevo = listaGeneralEstudiantes.buscar(*cedula);
    return nuevo.toString();
}

string Controlador::insertarNota(string* cedula, int nota){
    bool funciono = listaGeneralEstudiantes.insertarNota(*cedula, nota);
    
    if(funciono){
        return "La nota se registr\u00f3 exitosamente \n";
    } else {
        return "El estudiante no se encuentra en el sistema. \n";
    }
}


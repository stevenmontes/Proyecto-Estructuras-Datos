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
#include "Curso.h"
#include "Estudiante.h"

static ListaCursos listaCursos;
static ListaEstudiantes listaGeneralEstudiantes;

Controlador::Controlador() {
}

Controlador::Controlador(const Controlador& orig) {
}

Controlador::~Controlador() {
}

string Controlador::ingresarCurso(string codigo, string nombre,
        string aula, string horario, string dia) {
    Curso nuevo;
    nuevo.setCodigo(codigo);
    nuevo.setNombre(nombre);
    nuevo.setAula(aula);
    nuevo.setHorario(horario);
    nuevo.setDiaSemanal(dia);
    listaCursos.insertar(nuevo);
    return "Se registro correctamente \n";
}

string Controlador::ingresarEstudiante(string cedula, string nom1, string nom2,
        string ape1, string ape2) {
    Estudiante nuevo;
    nuevo.setCedula(cedula);
    nuevo.setPrimerNombre(nom1);
    nuevo.setSegundoNombre(nom2);
    nuevo.setPrimerApellido(ape1);
    nuevo.setSegundoApellido(ape2);
    listaGeneralEstudiantes.insertar(nuevo);
    return "Se registro correctamente \n";
}

string Controlador::matricularEstudiante(string cedula, string codCurso) {
    Estudiante nuevoAlumno = listaGeneralEstudiantes.buscar(cedula);
    Curso curso = listaCursos.buscar(codCurso);

    if (nuevoAlumno.getCedula() == "") {
        return "El estudiante no existe en el sistema \n";
    } else if (curso.getCodigo() != "") {
        ListaEstudiantes update = curso.getListaEstudiantes();
        update.insertar(nuevoAlumno);
        curso.setListaEstudiantes(update);
        listaCursos.insertar(curso);
        return "El estudiante se matriculo con exito";
    } else {
        return "El curso no existe en el sistema. \n";
    }
}

string Controlador::mostrarCursosPorEstudiante(string cedAlumno) {
    return listaCursos.obtenerCursosMatriculados(cedAlumno);
}

string Controlador::mostrarEstudiantesPorCurso(string codCurso) {
    Curso curso = listaCursos.buscar(codCurso);
    return curso.getListaEstudiantes().mostrar();
}

string Controlador::mostrarEstadosEstudiantes() {
    int maximo = listaCursos.size();
    
}

string Controlador::mostrarCursos() {
    return listaCursos.mostrar();
}

string Controlador::mostrarEstudiantes() {
    return listaGeneralEstudiantes.mostrar();
}

string Controlador::buscarCurso(string codigo) {
    Curso nuevo = listaCursos.buscar(codigo);
    return nuevo.toString();
}

string Controlador::buscarEstudiante(string cedula) {
    Estudiante nuevo = listaGeneralEstudiantes.buscar(cedula);
    return nuevo.toString();
}


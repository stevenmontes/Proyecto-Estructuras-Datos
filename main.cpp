/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Steven
 *
 * Created on July 12, 2018, 7:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Controlador.h"

using namespace std;

Controlador controlador;

void mostrarMenu();
int solicitarOpcion(string);
bool leerOpcion(int);
void obtenerInfoEstudiante();
void obtenerInfoCurso();
void matricularEstudiantesACurso();
void mostrarListaEstudiantesCurso();
void mostrarCursosMatriculadosPorEstudiante();
void mostrarEstadoEstudiantes();
void insertarNota();

/*
 * 
 */
int main(int argc, char** argv) {
    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        opcion = solicitarOpcion("Seleccione una opcion.");
        salir = leerOpcion(opcion);
    }

    return 0;
}

void mostrarMenu() {
    cout << "Menu principal." << endl;
    cout << "1. Crear curso." << endl;
    cout << "2. Anadir estudiantes nuevos." << endl;
    cout << "3. Matricular estudiantes a curso." << endl;
    cout << "4. Mostrar estudiantes por curso" << endl;
    cout << "5. Mostrar cursos matriculados por estudiante." << endl;
    cout << "6. Mostrar estudiantes por estado." << endl;
    cout << "7. Salir." << endl;
}

int solicitarOpcion(string message) {
    int opcion;
    cout << message << endl;
    cin >> opcion;
    return opcion;
}

bool leerOpcion(int opcion) {
    string codigo;
    switch (opcion) {
        case 1:
            obtenerInfoCurso();
            break;
        case 2:
            obtenerInfoEstudiante();
            break;
        case 3:
            matricularEstudiantesACurso();
            break;
        case 4:
            mostrarListaEstudiantesCurso();
            break;
        case 5:
            mostrarCursosMatriculadosPorEstudiante();
            break;
        case 6:
            mostrarEstadoEstudiantes();
            break;
        case 7:
            return true;
        case 8:
            cout << controlador.mostrarCursos();
            break;
        case 9:
            cout << controlador.mostrarEstudiantes();
            break;
        case 10:
            cout << "Digite el codigo del curso" << endl;
            cin >> codigo;
            cout << controlador.buscarCurso(codigo);
            break;
        case 11:
            cout << "Digite la cedula del estudiante" << endl;
            cin >> codigo;
            cout << controlador.buscarEstudiante(codigo);
            break;
        case 12:
            insertarNota();
        default:
            break;
    }
    
    return false;
}

void obtenerInfoCurso(){
    string codigo, nombre, aula, horario, dias;
    cout << "Digite el codigo del curso." << endl;
    cin >> codigo;
    cout << "Digite el nombre del curso." << endl;
    cin >> nombre;
    cout << "Digite el aula del curso." << endl;
    cin >> aula;
    cout << "Digite el horario del curso." << endl;
    cin >> horario;
    cout << "Digite el los dias lectivos del curso." << endl;
    cin >> dias;
    cout << controlador.ingresarCurso(codigo, nombre, aula, horario, dias);
}

void obtenerInfoEstudiante(){
    string cedula, nombre1, nombre2, apellido1, apellido2;
    cout << "Digite la cedula del estudiante." << endl;
    cin >> cedula;
    cout << "Digite el primer nombre del estudiante." << endl;
    cin >> nombre1;
    cout << "Digite el segundo nombre del estudiante." << endl;
    cin >> nombre2;
    cout << "Digite el primer apellido del estudiante." << endl;
    cin >> apellido1;
    cout << "Digite el segundo apellido del estudiante." << endl;
    cin >> apellido2;
    cout << controlador.ingresarEstudiante(cedula, nombre1, nombre2,
            apellido1, apellido2);
}

void matricularEstudiantesACurso(){
    string codigo, cedula;
    cout << "Digite el codigo del curso." << endl;
    cin >> codigo;
    cout << "Digite la cedula del estudiante a matricular" << endl;
    cin >> cedula;
    cout << controlador.matricularEstudiante(cedula, codigo);
}

void mostrarCursosMatriculadosPorEstudiante(){
    string cedula;
    cout << "Digite la cedula del estudiante" << endl;
    cin >> cedula;
    cout << controlador.mostrarCursosPorEstudiante(cedula);
}

void mostrarListaEstudiantesCurso(){
    string codigo;
    cout << "Digite el codigo del curso" << endl;
    cin >> codigo;
    cout << controlador.mostrarEstudiantesPorCurso(codigo);
}

void mostrarEstadoEstudiantes(){
    
}

void insertarNota(){
    string cedula = "";
    int nota = 0;
    cout << "Digite la cedula del estudiante" << endl;
    cin >> cedula;
    cout << "Digite la nota del estudiante" << endl;
    cin >> nota;
    cout << controlador.insertarNota(cedula, nota);
}


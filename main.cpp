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
string solicitarInformacion(string);
bool leerOpcion(int);
void obtenerInfoEstudiante();
void obtenerInfoCurso();
void matricularEstudiantesACurso(string* prt, string* ptr);
void mostrarListaEstudiantesCurso(string* prt);
void mostrarCursosMatriculadosPorEstudiante(string* prt);
void insertarNota(string* prt);
void buscarCurso(string* prt);
void buscarEstudiante(string* prt);
string solicitarHorario();
string solicitarDiaSemana();
string solicitarAula();

/*
 * 
 */
int main(int argc, char** argv) {
    int opcion;
    bool salir = false;
    controlador.inicializarAulas();

    while (!salir) {
        mostrarMenu();
        opcion = solicitarOpcion("Seleccione una opci\u00f3n.");
        salir = leerOpcion(opcion);
    }

    return 0;
}

void mostrarMenu() {
    cout << "Men\u00fa principal." << endl;
    cout << "1. A\u00f1adir curso nuevo." << endl;
    cout << "2. A\u00f1adir estudiante nuevo." << endl;
    cout << "3. Matricular estudiantes a un curso." << endl;
    cout << "4. Mostrar estudiantes de un curso" << endl;
    cout << "5. Mostrar cursos matriculados de un estudiante." << endl;
    cout << "6. Mostrar todos los cursos." << endl;
    cout << "7. Mostrar todos los estudiantes." << endl;
    cout << "8. Buscar un curso." << endl;
    cout << "9. Buscar un estudiante" << endl;
    cout << "10. Insertar nota" << endl;
    cout << "11. Mostrar todas las aulas." << endl;
    cout << "12. Salir." << endl;
}

int solicitarOpcion(string message) {
    int opcion;
    cout << message << endl;
    cin >> opcion;
    return opcion;
}

string solicitarInformacion(string message) {
    string opcion;
    cout << message << endl;
    cin >> opcion;
    return opcion;
}

bool leerOpcion(int opcion) {
    string codigo, cedula;
    switch (opcion) {
        case 1:
            obtenerInfoCurso();
            break;
        case 2:
            obtenerInfoEstudiante();
            break;
        case 3:
            matricularEstudiantesACurso(&codigo, &cedula);
            break;
        case 4:
            mostrarListaEstudiantesCurso(&codigo);
            break;
        case 5:
            mostrarCursosMatriculadosPorEstudiante(&codigo);
            break;
        case 6:
            cout << controlador.mostrarCursos();
            break;
        case 7:
            cout << controlador.mostrarEstudiantes();
            break;
        case 8:
            buscarCurso(&codigo);
            break;
        case 9:
            buscarEstudiante(&codigo);
            break;
        case 10:
            insertarNota(&codigo);
            break;
        case 11:
            cout << controlador.mostrarAulas();
            break;
        case 12:
            return true;
        default:
            break;
    }

    return false;
}

void obtenerInfoCurso() {
    string codigo = solicitarInformacion("Digite el c\u00f3digo del curso");
    string nombre = solicitarInformacion("Digite el nombre del curso");
    string aula = solicitarAula();
    string horario = solicitarHorario();
    string dias = solicitarDiaSemana();
    cout << controlador.ingresarCurso(&codigo, &nombre, &aula, &horario, &dias);
}

void obtenerInfoEstudiante() {
    string cedula = solicitarInformacion("Digite la c\u00e9dula del estudiante");
    string nombre1 = solicitarInformacion("Digite el primer nombre del estudiante");
    string nombre2 = solicitarInformacion("Digite el segundo nombre del estudiante");
    string apellido1 = solicitarInformacion("Digite el primer apellido del estudiante");
    string apellido2 = solicitarInformacion("Digite el segundo apellido del estudiante");
    cout << controlador.ingresarEstudiante(&cedula, &nombre1, &nombre2,
            &apellido1, &apellido2);
}

void matricularEstudiantesACurso(string* ptrCodigo, string* ptrCedula) {
    *ptrCodigo = solicitarInformacion("Digite el c\u00f3digo del curso");
    *ptrCedula = solicitarInformacion("Digite la c\u00e9dula del estudiante");
    cout << controlador.matricularEstudiante(ptrCedula, ptrCodigo);
}

void mostrarListaEstudiantesCurso(string* ptrCodigo) {
    *ptrCodigo = solicitarInformacion("Digite el c\u00f3digo del curso");
    cout << controlador.mostrarEstudiantesPorCurso(ptrCodigo);
}

void mostrarCursosMatriculadosPorEstudiante(string* ptrCodigo) {
    *ptrCodigo = solicitarInformacion("Digite la c\u00e9dula del estudiante");
    cout << controlador.mostrarCursosPorEstudiante(ptrCodigo);
}

void buscarCurso(string* ptrCodigo) {
    *ptrCodigo = solicitarInformacion("Digite el c\u00f3digo del curso");
    cout << controlador.buscarCurso(ptrCodigo);
}

void buscarEstudiante(string* ptrCodigo) {
    *ptrCodigo = solicitarInformacion("Digite la c\u00e9dula del estudiante");
    cout << controlador.buscarEstudiante(ptrCodigo);
}

void insertarNota(string* ptrCodigo) {
    *ptrCodigo = solicitarInformacion("Digite la c\u00e9dula del estudiante");
    int nota = solicitarOpcion("Digite la nota del estudiante");
    cout << controlador.insertarNota(ptrCodigo, nota);
}

string solicitarHorario() {
    while (true) {
        int horario = solicitarOpcion("Digite el horario del curso\n"
                " 1. Ma\u00f1ana \n 2. Tarde \n 3. Noche \n");
        switch (horario) {
            case 1:
                return "Ma\u00f1ana";
            case 2:
                return "Tarde";
            case 3:
                return "Noche";
            default:
                cout << "Dato incorrecto. vuelve a intentarlo." << endl;
                break;
        }
    }

}

string solicitarDiaSemana() {
    while (true) {
        int diaSemanal = solicitarOpcion("Digite el d\u00eda de la semana\n"
                " 1. Lunes.\n 2. Martes.\n 3. Mi\u00e9rcoles.\n 4. Jueves.\n 5. Viernes.\n"
                " 6. S\u00e1bado.");
        switch (diaSemanal) {
            case 1:
                return "Lunes";
            case 2:
                return "Martes";
            case 3:
                return "Mi\u00e9rcoles";
            case 4:
                return "Jueves";
            case 5:
                return "Viernes";
            case 6:
                return "S\u00e1bado";
            default:
                cout << "Dato incorrecto, vuelve a intentarlo." << endl;
        }
    }
}

string solicitarAula() {
    if (controlador.validarAulasDisponibles()) {
        while (true) {
            string aula = solicitarInformacion("Digite el n\u00famero del aula\n (Del 1 al 5)");

            if (controlador.esAulaDisponible(aula)) {
                cout << controlador.cambiarEstadoAula(aula) << endl;
                return aula;
            } else {
                cout << "Esta aula est\u00e1 ocupada;" << endl;
            }
        }
    }
    cout << "Todas las aulas ya no est\u00e1n disponibles." << endl;
    return "SIN AULA";
}




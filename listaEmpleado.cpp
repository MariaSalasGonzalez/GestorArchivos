/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaEmpleado.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 18:24
 */

/* 
 * Universidad Nacional 
 * Escuela de Informatica
 * EIF 201-Programacion 1
 * Estudiante: Maria Amalia Salas Gonzalez
 * Profesora: Jennifer Fuentes Bustos
 * Grupo: 05
 * Actividad de aprendizaje #3 - Lista de empleados (polimórfica) y archivos
 */

#include <sstream>
using std::stringstream;

#include "listaEmpleado.h"

listaEmpleado::listaEmpleado():
        primero(NULL), 
        actual(NULL),
        n(0){
}

listaEmpleado::~listaEmpleado() {
    delete primero;
}

void listaEmpleado::agregarEmpleado(empleado* e){
    primero= new nodoEmpleado(e, primero);
    n++;
}

string listaEmpleado::toString() {
    stringstream r;
    inicializarActual();
    empleado* _empleado;
    
    while(actual != NULL){
        _empleado= actual->getDato();
        r << _empleado->toString() <<"\n";
        actual= actual->getSiguiente();
    }
    
    return r.str();
}

int listaEmpleado::getN() {
    return n;
}

void listaEmpleado::inicializarActual() {
    actual= primero;
}


empleado* listaEmpleado::recuperarEmpleado() {
    empleado* e= actual->getDato();
    actual= actual->getSiguiente();
    return e;
}

empleado* listaEmpleado::recuperarEmpleadoPorId(string id){
    empleado* e;
    inicializarActual();
    while(actual != NULL){
        e= actual->getDato();
        if(e->getId()== id){
            return e;
        }
        actual = actual->getSiguiente();
    }
    return NULL;
}








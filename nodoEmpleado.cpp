/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoEmpleado.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 18:27
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

#include "nodoEmpleado.h"
#include "listaEmpleado.h"


#include <sstream>
using std::string;

nodoEmpleado::nodoEmpleado(empleado* dato, nodoEmpleado* siguiente):
        dato(dato),
        siguiente(siguiente) {
}

nodoEmpleado::~nodoEmpleado() {
    if(dato != NULL){
        delete dato;
    }
    if(siguiente != NULL){
        delete siguiente;
    }
}

empleado* nodoEmpleado::getDato(){
    return dato;
}

nodoEmpleado* nodoEmpleado::getSiguiente(){
    return siguiente;
}


void nodoEmpleado::fijarSiguiente(nodoEmpleado* sig){
    siguiente= sig;
}

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
using namespace std;

#include "empleado.h"

empleado::empleado(string id, string apellido, string nombre):
        id(id),
        apellido(apellido),
        nombre(nombre) {
}


string empleado::toString(){
    stringstream r;
    r << id << ", " << apellido << ", " << nombre ;
    return r.str();
}

string empleado::getId(){
    return id;
}
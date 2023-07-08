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


#include <iomanip>
#include <sstream>
using namespace std;

#include "empleadoFijo.h"

empleadoFijo::empleadoFijo(string id, string apellido, string nombre, double salario)
: empleado(id, apellido, nombre), _salario(salario) {

}

double empleadoFijo::salarioNeto() const {
    return _salario * (1.0 - PORCENTAJE_DEDUCCIONES);
}

const double empleadoFijo::PORCENTAJE_DEDUCCIONES = 0.12;

string empleadoFijo::toString(){
    stringstream r;
    r << empleado::toString() << ", ";
    r << setprecision(2) << fixed << _salario;
    return r.str();
}
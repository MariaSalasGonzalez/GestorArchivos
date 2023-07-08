/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaEmpleado.h
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


#ifndef LISTAEMPLEADO_H
#define LISTAEMPLEADO_H


#include <sstream>
using std::string;

#include "nodoEmpleado.h"

class listaEmpleado {
public:
    listaEmpleado();
    virtual ~listaEmpleado();
    virtual void agregarEmpleado(empleado*);
    virtual string toString();
    
    virtual void inicializarActual();
    virtual empleado* recuperarEmpleado();
    virtual empleado* recuperarEmpleadoPorId(string);
    virtual int getN();
    
private:
    nodoEmpleado* primero;
    nodoEmpleado* actual;
    int n;

};


#endif /* LISTAEMPLEADO_H */


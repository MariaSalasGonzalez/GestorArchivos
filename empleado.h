/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.h
 * Author: ESCINF
 *
 * Created on 31 de octubre de 2019, 18:23
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

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <sstream>
using std::string;

class empleado {
public:
    empleado(string, string, string);
    virtual double salarioNeto() const= 0;
    virtual string toString();
    virtual string getId();

private:
    string id;
    string apellido;
    string nombre;
};


#endif /* EMPLEADO_H */


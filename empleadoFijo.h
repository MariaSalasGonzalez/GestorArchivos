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


#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H

#include "empleado.h"

class empleadoFijo : public empleado {
public:
    empleadoFijo(std::string, std::string, std::string, double);
    virtual double salarioNeto() const;
    virtual std::string toString();
    static const double PORCENTAJE_DEDUCCIONES;
    

private:
    double _salario;
};

#endif /* EMPLEADOFIJO_H */


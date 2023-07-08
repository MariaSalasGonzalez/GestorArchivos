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

#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H

#include <sstream>
using std::string;

#include <fstream>
using namespace std;

#include "listaEmpleado.h"
#include "empleado.h"

class empleado;
class gestorArchivos;

class gestorArchivos {
public:
    gestorArchivos(string);
    virtual ~gestorArchivos();
    
    //****Paso 1****
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();
    
    //****Paso 2****
    static int obtenerInt(std::string);
    static double obtenerDouble(std::string);
    
    //****Paso 3****
    virtual void guardarInt(int,char);
    virtual void guardarDouble(double,char);
    virtual void guardarString(string, char);
    
    virtual int recuperarInt(char);
    virtual double recuperarDouble(char);
    virtual string recuperarString(char);
    
    //****Paso 4*****
    virtual void guardarEmpleado(empleado*);
    virtual empleado* recuperarEmpleado();
    
    //****Paso 5****
    virtual void guardarEmpleados(listaEmpleado*);
    virtual listaEmpleado* recuperarEmpleados();
    
private:
    string ruta;
    fstream archivo;

};

#endif /* GESTORARCHIVOS_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.cpp
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


#include "gestorArchivos.h"
#include "empleado.h"
#include "listaEmpleado.h"
#include "empleadoDestajo.h"
#include "empleadoFijo.h"

#include <sstream>

gestorArchivos::gestorArchivos(string ruta):
        ruta(ruta){
}


gestorArchivos::~gestorArchivos() {
}

void gestorArchivos::abrirFlujoModoEscritura(){
    archivo.open(ruta.c_str(), ios::out);
}


void gestorArchivos::abrirFlujoModoLectura(){
    archivo.open(ruta.c_str(), ios::in);
}


void gestorArchivos::cerrarFlujo(){
    archivo.close();
}


int gestorArchivos::obtenerInt(std::string s){
    int v;
    std::stringstream r(s);
    r >> v;
    return v;
}


double gestorArchivos::obtenerDouble(std::string s){
    double v;
    std::stringstream r(s);
    r >> v;
    return v;
}


void gestorArchivos::guardarInt(int i, char delimitador){
    archivo<<i<<delimitador;
}


void gestorArchivos::guardarDouble(double d, char delimitador){
    archivo<<d<<delimitador;
}


void gestorArchivos::guardarString(string s, char delimitador){
    archivo<<s<<delimitador;
}


int gestorArchivos::recuperarInt(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerInt(r);   
}

double gestorArchivos::recuperarDouble(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerDouble(r);
}


string gestorArchivos::recuperarString(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return r;
}


void gestorArchivos::guardarEmpleado(empleado* e){
    guardarString(e->toString(),'\n');
}


void gestorArchivos::guardarEmpleados(listaEmpleado* listaEmp){
    listaEmp->inicializarActual();    
    empleado* e;
    
    int n = listaEmp->getN();
    guardarInt(n,'\n');
    
    int i=0; 
    while(i < n){
        e = listaEmp->recuperarEmpleado();
        guardarEmpleado(e);
        i++;
    }
}


listaEmpleado* gestorArchivos::recuperarEmpleados() {
    listaEmpleado* listaEmp= new listaEmpleado();
    empleado* e = NULL;
    while(! archivo.eof()){
        e= recuperarEmpleado();
        if(e != NULL){
            listaEmp->agregarEmpleado(e);
        }
    }    
    return listaEmp;
}










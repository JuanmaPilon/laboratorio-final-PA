#include "Empleado.h"

Empleado::Empleado(){

}
Empleado::Empleado(string email, string nombre, string password, tipoCargo cargo,Hostal* hostalTrabaja):Usuario(email,nombre,password){
    this->cargo= cargo;
    this->hostalTrabaja=NULL;
}
string Empleado::getCargo(){
    switch (this->cargo)
    {
        case ADMINISTRACION:   return "Administracion";
        case LIMPIEZA:   return "Limpieza";
        case RECEPCION: return "Recepcion";
        case INFRAESTRUCTURA: return "Infraestructura";
        case SinCargo: return "Sin Cargo";
        default: return "Sin Cargo";
    }
}
Hostal* Empleado::getHostalTrabaja(){
    return this->hostalTrabaja;
}
string Empleado::getNombre(){
    this->Usuario::getNombre();
}
void Empleado::setHostalTrabaja(Hostal* hos){
    this->hostalTrabaja=hos;
}
void Empleado::setCargo(tipoCargo cargo){
    this->cargo=cargo;
}
Empleado::~Empleado(){  
}
#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    float sueldo;
}eEmployee;


#endif // EMPLEADO_H_INCLUDED

eEmployee* nuevoEmpleado();
int emp_setId(eEmployee* empleado,int id);
int emp_setNombre(eEmployee* empleado,char* nombre);
int emp_setSueldo(eEmployee* empleado,float sueldo);
void parser(eEmployee* empleado[]);


#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    eAlumno* pAlumno;

    pAlumno=alumno_nuevo();

    pAlumno=alumno_alta();

    alumno_mostrar(pAlumno);
    return 0;
}

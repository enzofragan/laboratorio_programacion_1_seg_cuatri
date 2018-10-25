typedef struct
{
    int id;
    char nombre[30];
    float altura;
}eAlumno;

eAlumno* alumno_nuevo();
eAlumno* alumno_nuevoParametro(int ,char* ,float );
void alumno_mostrar(eAlumno* );
eAlumno* alumno_alta();
int alumno_setId(char* );
int esNumerica(char* );

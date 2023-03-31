
//Desarrollar un programa que pida al usuario, por pantalla, que ingrese las notas de los alumnos del curso.
// Las notas se seguirán cargando hasta que ingrese -1.
// Una vez que finalice la carga, se tiene que mostrar por pantalla el promedio.

#include<stdio.h>
int main()
{
    float suma, nota, prom;
    int cont=0;
  do{
      printf("Ingrese nota del alumno, presione -1 para finalizar\n");
      scanf("%f", &nota);
      cont++;
      suma=suma+nota;
  }while(nota!=-1);
  prom=suma/(cont-1);
    printf("El promedio del alumno es %f",prom);
    return 0;

}
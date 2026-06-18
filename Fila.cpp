#include "ADT_Fila.h"

// Como usuario

// 3)

Fila EXTRAER_N_ESIMO(Fila Fila1, int N);

int main()
{
    puts("ADT FILA(ITEM)");
    puts("Definimos una nueva fila.");
    Fila Fila1;
    Fila1 = filaVacia();
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("\nAgrego un item a la 'Fila1'");
    puts("'enfila(Fila1, 2)'");
    Fila1 = enfila(Fila1, 2);
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("\nAgrego un item a la 'Fila1'");
    puts("'enfila(Fila1, 5)'");
    Fila1 = enfila(Fila1, 5);
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("\nDefilo un item de la 'Fila1'");
    puts("'Fila1 = defila(Fila1)'");
    Fila1 = defila(Fila1);
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("\nDefilo un item de la 'Fila1'");
    puts("'Fila1 = defila(Fila1)'");
    Fila1 = defila(Fila1);
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("Enfilo 3 items en la 'Fila1'");
    Fila1 = enfila(Fila1, 4);
    Fila1 = enfila(Fila1, 9);
    Fila1 = enfila(Fila1, 15);
    puts("'Fila1 = enfila(Fila1, 4)'\n'Fila1 = enfila(Fila1, 9)'\n'Fila1 = enfila(Fila1, 15)'");
    puts("Es 'Fila1' una fila vacia?");
    if (esFilaVacia(Fila1))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila1' vacia es: %d\n", frente(Fila1));
    printf("La cantidad de items de la 'Fila1' es: %d\n", longitud(Fila1));
    puts("Verifico si el item '15' pertenece a la 'Fila1':");
    puts("'pertenece(Fila1, 15)'");
    if (pertenece(Fila1, 15))
    {
        puts("Si pertenece");
    }
    else
    {
        puts("No pertenece");
    }
    puts("Muestro la 'Fila1'");
    mostrar(Fila1);
    puts("Defino una nueva fila llamada 'Fila2'");
    Fila Fila2;
    Fila2 = filaVacia();
    puts("Es 'Fila2' una fila vacia?");
    if (esFilaVacia(Fila2))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila2' vacia es: %d\n", frente(Fila2));
    printf("La cantidad de items de la 'Fila2' es: %d\n", longitud(Fila2));
    puts("Muestro la 'Fila2'");
    mostrar(Fila2);
    puts("Enfilo 4 items en la 'Fila2'");
    Fila2 = enfila(Fila2, 4);
    Fila2 = enfila(Fila2, 9);
    Fila2 = enfila(Fila2, 15);
    Fila2 = enfila(Fila2, 10);
    puts("'Fila2 = enfila(Fila2, 4)'\n'Fila2 = enfila(Fila2, 9)'\n'Fila2 = enfila(Fila2, 15)'\n'Fila2 = enfila(Fila2, 10)'");
    puts("Muestro la 'Fila2'");
    mostrar(Fila2);
    printf("La cantidad de items de la 'Fila2' es: %d\n", longitud(Fila2));
    puts("'Fila1' y 'Fila2' son iguales?");
    //Fila1 = filaVacia();
    //Fila2 = filaVacia();
    if (igualf(Fila1, Fila2))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    puts("Invierto la 'Fila1'");
    Fila1 = invertir(Fila1);
    puts("'Fila1 = invertir(Fila1)'");
    puts("Muestro la 'Fila1'");
    mostrar(Fila1);
    puts("Invierto la 'Fila2'");
    Fila2 = invertir(Fila2);
    puts("'Fila2 = invertir(Fila2)'");
    puts("Muestro la 'Fila2'");
    mostrar(Fila2);
    puts("Es 'Fila2' una fila vacia?");
    if (esFilaVacia(Fila2))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("El 'frente' de la 'Fila2' es: %d\n", frente(Fila2));
    printf("El 'final' de la 'Fila2' es: %d\n", final(Fila2));
    printf("La cantidad de items de la 'Fila2' es: %d\n", longitud(Fila2));
    puts("Defino una nueva fila llamada 'Fila3'");
    Fila Fila3 = filaVacia();
    printf("El 'frente' de la 'Fila3' es: %d\n", frente(Fila3));
    printf("El 'final' de la 'Fila3' es: %d\n", final(Fila3));
    puts("Concateno la 'Fila1' y la 'Fila2' en 'Fila3':");
    Fila3 = concat(Fila1, &Fila2);
    puts("Muestro la 'Fila3'");
    mostrar(Fila3);
    //printf("El 'final' de la 'Fila2' es: %d\n", final(Fila2));
    puts("Es 'Fila3' una fila vacia?");
    if (esFilaVacia(Fila3))
    {
        puts("\tSi");
    }
    else
    {
        puts("\tNo");
    }
    printf("Muestro 'frente' de la 'Fila2' para verificar que no tenga items despues de usar la operacion 'concat': %d\n", frente(Fila2));
    printf("El 'frente' de la 'Fila3' vacia es: %d\n", frente(Fila3));
    printf("La cantidad de items de la 'Fila3' es: %d\n", longitud(Fila3));
    puts("Uso la funcion 'EXTRAER_N_ESIMO' con la 'Fila3'");
    puts("Muestro la 'Fila3' antes de usar la funcion:");
    mostrar(Fila3);
    puts("Uso la funcion 'EXTRAER_N_ESIMO' con la 'Fila3'");
    puts("'Fila3 = EXTRAER_N_ESIMO(Fila3, 3)'");
    puts("Muestro la 'Fila3' antes de usar la funcion:");
    mostrar(Fila3);
    Fila3 = EXTRAER_N_ESIMO(Fila3, 3);
    puts("Muestro la 'Fila3' despues de usar la funcion:");
    mostrar(Fila3);
    printf("La cantidad de items de la 'Fila3' es: %d\n", longitud(Fila3));
    puts("Agrego el elemento 3 a la 'Fila3'");
    puts("'Fila3 = enfila(Fila3, 4)'");
    Fila3 = enfila(Fila3, 4);
    puts("Uso la operacion 'singular' en la 'Fila3'");
    puts("Muestro la 'Fila3' antes de usar la operacion:");
    mostrar(Fila3);
    puts("'Fila3 = singular(Fila3)'");
    Fila3 = singular(Fila3);
    puts("Muestro la 'Fila3' despues de usar la operacion:");
    mostrar(Fila3);
    printf("La cantidad de items de la 'Fila3' es: %d\n", longitud(Fila3));
    fflush(stdin);
    getchar();
    puts("Uso la operacion 'defilaN' en 'Fila3'");
    Fila3 = defilarN(Fila3, 4);
    mostrar(Fila3);
    printf("El 'frente' de la 'Fila3' vacia es: %d\n", frente(Fila3));
    
    puts("\nPresione la tecla ENTER para finalizar.");
    fflush(stdin);
    getchar();
    return 0;
}

Fila EXTRAER_N_ESIMO(Fila Fila1, int N){
    if (esFilaVacia(Fila1) || longitud(Fila1) < N)
    {
        return Fila1;
    }
    else
    {
        if (N == 1)
        {
            return EXTRAER_N_ESIMO(defila(Fila1), N - 1);
        }
        else
        {
            item aux = frente(Fila1);
            //Fila faux = EXTRAER_N_ESIMO(defila(Fila1), N - 1);
            //return concat(enfila(filaVacia(), aux), faux);
            //return enfila(enfila(filaVacia(), aux), frente(EXTRAER_N_ESIMO(defila(Fila1), N - 1)));
            return enfila(EXTRAER_N_ESIMO(defila(Fila1), N - 1), aux);
        }
    }
}
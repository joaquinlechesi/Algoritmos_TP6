#include <stdio.h>

typedef int item;

const item indefinido = -9999;

struct nodo {
    item dato;
    struct nodo * siguiente;
};

struct Fila {
    struct nodo * frente;
    struct nodo * final;
    int longitud;
};

Fila filaVacia(){ //constructora primitiva
    Fila nuevaFila;
    nuevaFila.frente = NULL;
    nuevaFila.final = NULL;
    nuevaFila.longitud = 0;
    return nuevaFila;
}

bool esFilaVacia(Fila Fila1){
    return Fila1.frente == NULL;
}

item frente(Fila Fila1){
    if (Fila1.frente == NULL)
    {
        return indefinido;
    }else
    {
        return Fila1.frente->dato;
    }
}

Fila enfila(Fila Fila1, item nuevoDato){
    nodo * nuevoNodo = new(nodo);
    nuevoNodo->dato = nuevoDato;
    nuevoNodo->siguiente = NULL;
    if (Fila1.frente == NULL)
    {
        Fila1.frente = nuevoNodo;
        Fila1.final = nuevoNodo;
    }
    else
    {
        //Fila1.frente = nuevoNodo;
        Fila1.final->siguiente = nuevoNodo;
        Fila1.final = nuevoNodo;
    }
    Fila1.longitud++;
    return Fila1;
}

Fila defila(Fila Fila1){
    if (Fila1.frente != NULL)
    {
        nodo * aux = new(nodo);
        aux = Fila1.frente;
        Fila1.frente = Fila1.frente->siguiente;
        Fila1.longitud--;
        delete(aux);
    }
    return Fila1;
}

int longitud(Fila Fila1){
    return Fila1.longitud;
}

bool pertenece(Fila Fila1, item datoBuscar){
    if (Fila1.frente == NULL)
    {
        return false;
    }
    else
    {
        if (frente(Fila1) == datoBuscar)
        {
            return true;
        }
        else
        {
            Fila1.frente = Fila1.frente->siguiente;
            return pertenece(Fila1, datoBuscar);
        }
    }
}

bool igualf(Fila Fila1, Fila Fila2){ //Funciona
    if (esFilaVacia(Fila1) && esFilaVacia(Fila2))
    {
        return true;
    }
    else
    {
        if (frente(Fila1) == frente(Fila2))
        {
            // item dato1 = frente(Fila1);
            // item dato2 = frente(Fila2);
            Fila1.frente = Fila1.frente->siguiente;
            Fila2.frente = Fila2.frente->siguiente;
            //return dato1 == dato2 && igualf(Fila1, Fila2);
            return igualf(Fila1, Fila2);
        }
        else
        {
            return false;
        }
    }
}

Fila invertir(Fila Fila1){
    if (esFilaVacia(Fila1))
    {
        return filaVacia();
    }
    else
    {
        item dato = frente(Fila1);
        //Fila1.frente = Fila1.frente->siguiente;
        return enfila(invertir(defila(Fila1)), dato);
    }
}

Fila concat(Fila Fila1, Fila Fila2){
    if (esFilaVacia(Fila1) && esFilaVacia(Fila2))
    {
        return filaVacia();
    }
    else
    {
        if (esFilaVacia(Fila1))
        {
            return Fila2;
        }
        else
        {
            if (esFilaVacia(Fila2))
            {
                return Fila1;
            }
            else
            {
                item frenteFila2 = frente(Fila2);
                //Fila2.frente = Fila2.frente->siguiente;
                return concat(enfila(Fila1, frenteFila2), defila(Fila2));
                //return enfila(concat(Fila1, invertir(defila(invertir(Fila2)))), dato1);
            }
        }
    }
}

//Extra

void mostrar(Fila Fila1){
    if (Fila1.frente == NULL)
    {
        puts("| fila vacia |");
    }
    else
    {
        if (Fila1.frente->siguiente == NULL)
        {  
            // item dato = Fila1.frente->dato;
            // Fila1.frente = Fila1.frente->siguiente;
            // return mostrar(Fila1);
            printf(" %d \n", Fila1.frente->dato);
        }
        else
        {
            item dato = Fila1.frente->dato;
            Fila1.frente = Fila1.frente->siguiente;
            printf(" %d ", dato);
            return mostrar(Fila1);
        }        
    }    
}

// 1)

item final(Fila Fila1){
    if (esFilaVacia(Fila1))
    {
        return indefinido;
    }
    else
    {
        return Fila1.final->dato;
    }
}

Fila defilarN(Fila Fila1, int N){
    if (esFilaVacia(Fila1) || longitud(Fila1) < N)
    {
        return Fila1;
    }
    else
    {
        if (N != 0)
        {
            //item dato = Fila1.final->dato;
            //Fila1 = defila(Fila1);
            return defilarN(defila(Fila1), N - 1);
        }
        else
        {
            return Fila1;
        }
    }
}

Fila singular(Fila Fila1){
    if (esFilaVacia(Fila1))
    {
        return filaVacia();
    }
    else
    {
        item frenteAux = frente(Fila1);
        Fila1 = defila(Fila1);
        if (pertenece(Fila1, frenteAux))
        {
            //aux = defila(aux);
            return singular(Fila1);
        }
        else
        {
            //item item1 = aux.frente->dato;
            return concat(enfila(filaVacia(), frenteAux), singular(Fila1));
            //return enfila(invertir(defila(invertir(Fila1))), frente(invertir(Fila1)));
        }
    }
}
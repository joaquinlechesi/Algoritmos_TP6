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
    int cantidad;
};

Fila filaVacia(){ //constructora primitiva
    Fila nuevaFila;
    nuevaFila.frente = NULL;
    nuevaFila.final = NULL;
    nuevaFila.cantidad = 0;
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
    Fila1.cantidad++;
    return Fila1;
}

Fila defila(Fila Fila1){
    if (Fila1.frente != NULL)
    {
        nodo * aux = new(nodo);
        aux = Fila1.frente;
        Fila1.frente = Fila1.frente->siguiente;
        Fila1.cantidad--;
        delete(aux);
    }
    return Fila1;
}

int longitud(Fila Fila1){
    return Fila1.cantidad;
}

bool pertenece(Fila Fila1, item datoBuscar){
    if (Fila1.frente == NULL)
    {
        return false;
    }
    else
    {
        if (Fila1.frente->dato == datoBuscar)
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
    if (Fila1.frente == NULL && Fila2.frente == NULL)
    {
        return true;
    }
    else
    {
        if (Fila1.frente != NULL && Fila2.frente != NULL)
        {
            item dato1 = Fila1.frente->dato;
            item dato2 = Fila2.frente->dato;
            Fila1.frente = Fila1.frente->siguiente;
            Fila2.frente = Fila2.frente->siguiente;
            return dato1 == dato2 && igualf(Fila1, Fila2);
        }
        else
        {
            return false;
        }
    }
}

Fila invertir(Fila Fila1){
    if (Fila1.frente == NULL)
    {
        return filaVacia();
    }
    else
    {
        item dato = Fila1.frente->dato;
        Fila1.frente = Fila1.frente->siguiente;
        return enfila(invertir(Fila1), dato);
    }
}

Fila concat(Fila Fila1, Fila Fila2){
    if (Fila1.frente == NULL && Fila2.frente == NULL)
    {
        return filaVacia();
    }
    else
    {
        if (Fila1.frente == NULL)
        {
            return Fila2;
        }
        else
        {
            if (Fila2.frente == NULL)
            {
                return Fila1;
            }
            else
            {
                
                item dato1 = Fila2.final->dato;
                return enfila(concat(Fila1, invertir(defila(invertir(Fila2)))), dato1);
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
    if (Fila1.frente == NULL)
    {
        return indefinido;
    }
    else
    {
        return Fila1.final->dato;
    }
}

Fila defilarN(Fila Fila1, int N){
    if (Fila1.frente == NULL)
    {
        return filaVacia();
    }
    else
    {
        if (longitud(Fila1) > N)
        {
            item dato = Fila1.final->dato;
            return enfila(invertir(defila(invertir(Fila1))), dato);
        }
        else
        {
            return filaVacia();
        }
        
    }
}

Fila singular(Fila Fila1){
    if (Fila1.frente == NULL)
    {
        return filaVacia();
    }
    else
    {
        if (pertenece(invertir(defila(invertir(Fila1))), frente(invertir(Fila1))))
        {
            return singular(invertir(defila(invertir(Fila1))));
        }
        else
        {
            return enfila(invertir(defila(invertir(Fila1))), frente(invertir(Fila1)));
        }
        
    }
}
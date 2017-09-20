//
// Created by alumno on 20/09/17.
//

#ifndef REPASO_1ER_PARCIAL_NODO_H
#define REPASO_1ER_PARCIAL_NODO_H

#include <iostream>

template<class T>
class Nodo{
private:
    T dato;
    Nodo<T> *next;

public:
    Nodo(T dato) {
        this->dato = dato;
        next = NULL;
    }

    Nodo(T dato, Nodo<T> *next) : dato(dato), next(next) {}

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo::dato = dato;
    }

    Nodo<T> *getNext() const {
        return next;
    }

    void setNext(Nodo<T> *n){
        next = n;
    }



};

#endif //REPASO_1ER_PARCIAL_NODO_H

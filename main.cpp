//
// Created by alumno on 20/09/17.
//

#include "Pila.h"
#include "Lista.h"
using namespace std;

Lista<int> remover(Lista<int>, Pila<int>);

main(){

    int n, x;
    Lista<int> a;

    cout << "Ingrese la cantidad de elementos de la lista" << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "ingrese un número " << endl;
        cin >> x;
        a.insertarPrimero(x);
    }

    Pila<int> b;

    cout << "Ingrese la cantidad de elementos de la pila" << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "ingrese un número " << endl;
        cin >> x;
        b.push(x);
    }


    remover(a, b);

    a.recorrer();

    return 0;
}

Lista<int> remover(Lista<int> a, Pila<int> b){

    while(b.peek() != NULL)
        a.remover(b.pop());

    return a;

}
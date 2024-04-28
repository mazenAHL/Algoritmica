#include <iostream>
#include <stack>

using namespace std;

int main() { // Declara una pila llamada 'pilita'.
    stack<int> pilita  
    pilita.push(1); // Añade el número 1 a la pila.
    pilita.push(2);
    pilita.push(3);

    int num = 0;
    pilita.push(num);//Añade el valor de la variable 'num' 

    pilita.pop();// Elimina el último elemento añadido a la pila (0).
    pilita.pop();
    pilita.pop();
   
    while (!pilita.empty()) { // Mientras la pila no esté vacía imprimir elemento arriba de la pila, Imprime el elemento en la cima de la pila, elimina el elemento en la cima de la pila.
        cout << pilita.top() << " ";
        pilita.pop();
    }
}

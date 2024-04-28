#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> colita; //Crear cola "colita"

  
    colita.push(1);  // Añade el número 1 al final de la cola.
    colita.push(2);  
 
    colita.pop();   // Elimina el primer elemento de la cola, que es el 1.


    int num = 5;
    colita.push(num);  Añade el valor de la variable 'num'


    colita.pop(); // Elimina el primer elemento actual de la cola
    colita.pop();  

    while (!colita.empty()) { // Mientras la cola no esté vacía, imprime el primer elemento de la cola, elimina el primer elemento de la cola.
        cout << colita.front() << endl;
        colita.pop(); 
    }
}

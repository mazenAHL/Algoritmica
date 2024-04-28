#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool visited[1000];  // Arreglo para marcar los nodos visitados durante DFS
vector<int> grafo[1000];  // Lista de adyacencia para representar el grafo

// Función DFS 
void DFS(int startNode) {
    stack<int> stack; // Crea una pila
    stack.push(startNode); // Inicia el recorrido con el nodo de partida
    while (!stack.empty()) { // Mientras haya nodos por visitar
        int currentNode = stack.top(); // Obtiene el nodo en la cima de la pila
        stack.pop(); // Remueve el nodo de la pila
        if (!visited[currentNode]) { // Si el nodo no ha sido visitado
            visited[currentNode] = true; // Marca el nodo como visitado
            for (int i = 0; i < grafo[currentNode].size(); i++) { // Recorre todos los vecinos del nodo
                int neighbor = grafo[currentNode][i];
                if (!visited[neighbor]) { // Si el vecino no ha sido visitado
                    stack.push(neighbor); // Añade el vecino a la pila para visitarlo luego
                }
            }
        }
    }
}

int main() {
    int nodes, aristas;
    cin >> nodes >> aristas; // Lee el número de nodos y aristas
    for (int i = 0; i < aristas; i++) { // Lee las aristas y construye el grafo
        int startNode, endNode;
        cin >> startNode >> endNode;
        grafo[startNode].push_back(endNode); // Añade la arista al grafo
    }

    int S, T;
    cin >> S >> T; // Lee los nodos S y T para comprobar si T es alcanzable desde S
    DFS(S); // Ejecuta DFS desde S
    if (visited[T]) { // Si T fue visitado durante el DFS
        cout << "Si se pudo" << endl;
    } else {
        cout << "No lo podrías conocer" << endl;
    }
}


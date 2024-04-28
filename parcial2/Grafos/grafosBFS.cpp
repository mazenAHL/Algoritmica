#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[1000];  // Arreglo para marcar los nodos que han sido visitados
vector<int> grafo[1000];  // Lista de adyacencia para representar el grafo

// Función para realizar el recorrido BFS
void BFS(int nodoInicial) {
    queue<int> queue;  // Cola para gestionar los nodos en el recorrido BFS
    queue.push(nodoInicial);  // Encola el nodo inicial
    visited[nodoInicial] = true;  // Marca el nodo inicial como visitado

    while (!queue.empty()) {  // Mientras haya nodos en la cola
        int currentNode = queue.front();  // Obtiene el nodo al frente de la cola
        queue.pop();  // Desencola el nodo

        for (int i = 0; i < grafo[currentNode].size(); i++) {  // Recorre todos los vecinos del nodo
            int neighbor = grafo[currentNode][i];
            if (!visited[neighbor]) {  // Si el vecino no ha sido visitado
                visited[neighbor] = true;  // Marca el vecino como visitado
                queue.push(neighbor);  // Encola el vecino
            }
        }
    }
}

int main() {
    int nodos, aristas;
    cin >> nodos >> aristas;  // Lee el número de nodos y aristas
    for (int i = 0; i < aristas; i++) {
        int nodoInicial, nodoFinal;
        cin >> nodoInicial >> nodoFinal;  // Lee cada arista
        grafo[nodoInicial].push_back(nodoFinal);  // Añade la arista al grafo
    }

    int S, T;
    cin >> S >> T;  // Lee los nodos S y T para verificar conectividad
    BFS(S);  // Ejecuta BFS desde el nodo S
    if (visited[T]) {  // Si T fue visitado en el recorrido BFS
        cout << "Si se pudo" << endl;  // Indica que S puede llegar a T
    } else {
        cout << "No lo podrías conocer" << endl;  // Indica que S no puede llegar a T
    }
}

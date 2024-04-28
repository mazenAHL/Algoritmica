#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matriz; // Crear matriz

// Función para crear la matriz  con n nodos sin conexiones
void crearMatriz(int n) {
    for (int i = 0; i < n; i++) {
        vector<int> fila(n, 0); // Crea una fila con todos los elementos a 0
        matriz.push_back(fila); // Añade fila a la matriz
    }
}

// Función para añadir una arista dirigida de un nodo origen a un nodo destino
void anadirConexion(int origen, int destino) {
    matriz[origen][destino] = 1; // Establece la conexión 
}

int main() {
    int n;  // Número de nodos del grafo
    cin >> n;
    crearMatriz(n); 
    int q;  // Número de aristas 

    for (int i = 0; i < q; i++) {
        int origen, destino;
        cin >> origen >> destino;
        anadirConexion(origen, destino);  // Añade cada arista dirigida
    }

    // Imprime la matriz 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

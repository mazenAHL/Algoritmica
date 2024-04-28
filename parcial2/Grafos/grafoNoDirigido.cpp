#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matriz; // Definimos la matriz 

// Función para inicializar la matriz con n nodos, todos desconectados.
void crearMatriz(int n) {
    for (int i = 0; i < n; i++) {
        vector<int> fila(n, 0);  // Crea una fila con n ceros.
        matriz.push_back(fila);  // Añade la fila a la matriz.
    }
}

// Función para agregar una conexión
void anadirConexion(int a, int b) {
    matriz[a][b] = 1;
    matriz[b][a] = 1;
}

int main() {
    int n;  // Número de nodos en el grafo.
    cin >> n;
    crearMatriz(n);  

    int q;  // Número de aristas
    cin >> q;

    for (int i = 0; i < q; i++) {
        int a, b;  
        cin >> a >> b;
        anadirConexion(a, b);  // Agrega la arista entre los nodos.
    }

    // Imprimir la matriz 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

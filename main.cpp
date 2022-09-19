#include <iostream>

using namespace std;
const int MAX = 100;

void stampa(int fine[], int dimfine) {
	for (int i = 0; i < dimfine; i++) {
		cout << fine[i] << " ";
	}
	return;
}

void carica(int arr[], int &dim) {
	cout << "Inserisci il numero di elementi all'interno dell'array: ";
	cin >> dim;
	for (int i = 0; i < dim; i++) {
		cout << endl;
		cout << "Inserire il " << i + 1 << " elemento del vettore" << endl;
		cin >> arr[i];
	}
	return;
}

void confronto(int valore, int arr[], int dim, int fine[], int &valorefine) {
	int i = 0;
	for (int i = 0; i < dim; i++) {
		if (valore == arr[i]) {
			fine[valorefine] = valore;
			valorefine++;
			return;
		}
	}
}

void algoritmo(int arr[], int arr1[], int dim, int dim1, int fine[]) {
	int valorefine = 0;
	for (int i = 0; i < dim1; i++) {
		confronto(arr1[i], arr, dim, fine, valorefine);
	}
	stampa(fine, valorefine);
}

int main(){
	int arr[MAX];
	int dim;
	int arr1[MAX];
	int dim1;
	int fine[MAX];
	carica(arr, dim);
	carica(arr1, dim1);
	algoritmo(arr, arr1, dim, dim1, fine);
}

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *next;
};

int main() {
	int resp;
    Node *p = NULL;
	do {
		cout << "\n\n\tMENU\n\n";
		cout << "\t\t1) Imprimir lista\n";
		cout << "\t\t2) Insertar elemento en la cabeza de la lista\n";
        cout << "\t\t2) Insertar elemento en la cola de la lista\n";
		cout << "\t\t4) Eliminar elemento\n";
		cout << "\t\t0) Salir\n\n";
		cout << "\tMarque su opcion: ";
		cin >> resp;
        switch (resp) {
            case 0: {
                cout << "Finalizando programa";            
            } break;


            case 1: 
                /* code */
                break;

            case 2: {
                Node *newElement = new Node;
                int element;
                if (!newElement) {
                    cout << "No hay suficiente espacio en memoria para insertar un nueva elemento";
                }
                else {
                    cout << "Ingrese el elemento a insertar: ";
                    cin >> element;
                    newElement -> value = element;
                    newElement -> next = p;
                    p = newElement;
                }
            } break;

            default:
                cout << "Opción no valida";
                break;
        }
		
    } while(resp);
}

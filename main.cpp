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
		cout << "MENU\n\n";
		cout << "1) Imprimir lista\n";
		cout << "2) Insertar elemento en la cabeza de la lista\n";
        cout << "3) Insertar elemento en la cola de la lista\n";
		cout << "4) Eliminar elemento\n";
		cout << "0) Salir\n\n";
		cout << "\tMarque su opcion: ";
		cin >> resp;
        switch (resp) {
            case 0: {
                cout << "Finalizando programa";            
            } break;


            case 1: {
                Node *aux = p;
                cout << "Imprimendo la lista actual:\n";
                while (aux) {
                    cout << "|" << aux -> value << "| -> ";
                    aux = aux -> next;
                }
                cout << "NULL\n\n";
                delete aux;
                
            } break;

            case 2: {
                Node *newElement = new Node;
                int element;
                if (!newElement) {
                    cout << "No hay suficiente espacio en memoria para insertar un nueva elemento";
                }
                else {
                    cout << "\tIngrese el elemento a insertar: ";
                    cin >> element;
                    newElement -> value = element;
                    newElement -> next = p;
                    p = newElement;
                    newElement = NULL;
                    delete newElement;
                }
            } break;

            default:
                cout << "Opción no valida";
                break;
        }
		
    } while(resp);
}

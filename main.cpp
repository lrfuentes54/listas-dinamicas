#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *next;
};

/**
 * Función para insertar elementos a una lista dinámica
 *
 * @param   Node**   p        Puntero al puntero de la lista principal
 * @param   int      index    Indice donde insertar el elemento (por ahora, solo acepta cabeza y cola)
 *
 * @return  void           
 */
void insertar(Node **p, int index) {
    Node *newElement = new Node;
    int element;
    if (!newElement) {
        cout << "No hay suficiente espacio en memoria para insertar un nueva elemento";
        return;
    }
    
    cout << "\tIngrese el elemento a insertar: ";
    cin >> element;
    newElement -> value = element;
    if (!index) {
        newElement -> next = *p;
        *p = newElement;
    }
    else {
        
    }
    newElement = NULL;
    delete newElement;
}

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

            case 2: 
                insertar(&p, 0);
                break;

            case 3: {
                Node *newElement = new Node;
                int element;
                if (!newElement) {
                    cout << "No hay suficiente espacio en memoria para insertar un nueva elemento";
                }
                else {
                    cout << "\tIngrese el elemento a insertar: ";
                    cin >> element;
                    Node *aux = p;
                    newElement -> value = element;
                    newElement -> next = NULL;
                    while (aux && aux -> next) aux = aux -> next;
                    if (aux) aux -> next = newElement;
                    else p = newElement;
                    newElement = NULL;
                    aux = NULL;
                    delete aux;
                    delete newElement;
                }
            } break;

            case 4: {
                int element;
                cout << "\tIngrese el elemento a eliminar: ";
                cin >> element;
                Node *aux = p;
                while (aux && aux -> value != element) aux = aux -> next;
                if (!aux) cout << "No se encontró el elemento a eliminar\n";
                else if (aux && aux == p) p = p -> next;
                else {
                    Node *aux2 = p;
                    while (aux2 -> next != aux) aux2 = aux2 -> next;
                    aux2 -> next = aux -> next;
                    aux2 = NULL;
                    delete aux2;
                }
                delete aux;
            } break;

            default:
                cout << "Opción no valida";
                break;
        }
		
    } while(resp);
}

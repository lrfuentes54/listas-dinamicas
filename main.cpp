#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *next;
};

int main() {
	int resp;
	do {
		cout << "\n\n\tMENU\n\n";
		cout << "\t\t1) Imprimir lista\n";
		cout << "\t\t2) Insertar elemento\n";
		cout << "\t\t3) Eliminar elemento\n";
		cout << "\t\t0) Salir\n\n";
		cout << "\tMarque su opcion: ";
		cin >> resp;
        switch (resp) {
            case 1:
                /* code */
                break;

            case 2:
                /* code */
                break;

            case 3:
                /* code */
                break;    
            
            default:
                break;
        }
		
    } while(resp);
}

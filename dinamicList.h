struct Node {
    int value;
    Node *next;
};

/**
 * Función para insertar elementos a una lista dinámica
 *
 * @param   Node**   p        Puntero al puntero de la lista principal
 * @param   int      element  Elemento a insertar en la lista
 * @param   int      index    Indice donde insertar el elemento (por ahora, solo acepta cabeza y cola)
 *
 * @return  bool              Devuelve true cuando logra insertar, false cuando no           
 */
bool insertar(Node **p, int element, int index) {
    Node *newElement = new Node;
    if (!newElement) return false;
    newElement -> value = element;
    if (!index) {
        newElement -> next = *p;
        *p = newElement;
    }
    else {
        Node *aux = *p;
        while (aux && aux -> next) aux = aux -> next;
        if (aux) aux -> next = newElement;
        else *p = newElement;
    }
    newElement = 0;
    delete newElement;
    return true;
}

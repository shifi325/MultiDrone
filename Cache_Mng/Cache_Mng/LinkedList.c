//#include <stdio.h>
//#include <stdlib.h>
//#include "Cache_Mng.c"
//
//
//
//void insertAtHead(DoublyLinkedList* list, int data) {
//    Node* newNode = createNode(data);
//    if (list->head == NULL) {
//        list->head = list->tail = newNode;
//    }
//    else {
//        list->head->prev = newNode;
//        newNode->next = list->head;
//        list->head = newNode;
//    }
//    list->size++;
//}
//
//
//
//void deleteNode(DoublyLinkedList* list, Node* node) {
//    if (node == NULL) {
//        return;
//    }
//
//    if (node == list->head && node == list->tail) {
//        list->head = list->tail = NULL;
//    }
//    else if (node == list->head) {
//        list->head = list->head->next;
//        list->head->prev = NULL;
//    }
//    else if (node == list->tail) {
//        list->tail = list->tail->prev;
//        list->tail->next = NULL;
//    }
//    else {
//        node->prev->next = node->next;
//        node->next->prev = node->prev;
//    }
//
//    destroyNode(node);
//    list->size--;
//}
//void moveNodeToHead(DoublyLinkedList* list, Node* node) {
//    if (node == list->head) {
//        return;
//    }
//
//    if (node == list->tail) {
//        list->tail = node->prev;
//        list->tail->next = NULL;
//    }
//    else {
//        node->prev->next = node->next;
//        node->next->prev = node->prev;
//    }
//
//    node->next = list->head;
//    list->head->prev = node;
//    node->prev = NULL;
//    list->head = node;
//}
//
//int isEmpty(DoublyLinkedList* list) {
//    return list->size == 0;
//}
//void printForward(DoublyLinkedList* list, void (*printFunc)(void*)) {
//    Node* curr = list->head;
//    while (curr != NULL) {
//        printFunc(curr->data);
//        curr = curr->next;
//    }
//    printf("\n");
//}
//
//int getSize(DoublyLinkedList* list) {
//    return list->size;
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdint.h>
//#include <string.h>
//#include "Cache_Mng.c"
//
//
//
//#define INITIAL_CAPACITY 16  // must not be zero
//
//
////// Free memory allocated for hash table, including allocated keys.
////void ht_destroy(HashTable* table) {
////    // Free all linked nodes
////    for (size_t i = 0; i < table->size; ++i) {
////        if (table->entries[i] != NULL) {
////            free(table->entries[i]->linkPointer);
////            free(table->entries[i]);
////        }
////    }
////    // Free entries array and table itself.
////    free(table->entries);
////    free(table);
////}
//
//// Hash function by images id
//static uint64_t hash_function(int imageId, size_t size) {
//    return (uint64_t)imageId % size;
//}
//// Insert an object into the hash table
//void ht_insert(HashTable* table, HashObj* obj) {
//    uint64_t index = hash_function(obj->imageId, table->size);
//    table->entries[index] = obj;
//    table->length++;
//}
//
//// Search for an object by imageId in the hash table
//HashObj* ht_search(HashTable* table, int imageId) {
//    uint64_t index = hash_function(imageId, table->size);
//    return table->entries[index];
//}
//
//// Delete an object by imageId from the hash table
////void ht_delete(HashTable* table, int imageId) {
////    uint64_t index = hash_function(imageId, table->size);
////    if (table->entries[index] != NULL) {
////        destroyHashObj(table->entries[index]);
////        table->entries[index] = NULL;
////        table->length--;
////    }
////}
//
//int main() {
////    // Create a new hash table
//    HashTable* hash_table = createHashTable();
//
//
//    Node* node1 = createNode();
//    HashObj* hashObj = createHashObj(1,node1);
//    NodeObj* nodeObj = createNodeObj(hashObj,100);
//    node1->data = nodeObj;
//    ht_insert(hash_table, hashObj);
//
//    destroyHashObj(hashObj);
//    destroyNode(node1);
////
////    // Example of creating Nodes
////   
////        /*(Node*)malloc(sizeof(Node));
////    node1->data = 1;*/ // Example data, can be customized
////
////    //Node* node2 = (Node*)malloc(sizeof(Node));
////    //node2->data = 2; // Example data, can be customized
////
////    // Example of creating HashObjs and inserting them into hash table
////    //HashObj* obj1 = (HashObj*)malloc(sizeof(HashObj));
////    //obj1->imageId = 1;
////    //obj1->linkPointer = node1;
////    //ht_insert(hash_table, obj1);
////
////    //HashObj* obj2 = (HashObj*)malloc(sizeof(HashObj));
////    //obj2->imageId = 2;
////    //obj2->linkPointer = node2;
////    //ht_insert(hash_table, obj2);
////
////    // Example of searching for a HashObj by imageId
////    //HashObj* found_obj = ht_search(hash_table, 1);
////    //if (found_obj != NULL) {
////    //    printf("Found imageId %d\n", found_obj->imageId);
////    //}
////    //else {
////    //    printf("ImageId not found\n");
////    //}
////
////    // Example of deleting a HashObj by imageId
////    //ht_delete(hash_table, 1);
////
////    // Free allocated memory
////    //free(node1);
////    //free(node2);
////    //free(obj1);
////    //free(obj2);
////
////    // Destroy hash table and free memory
////    //ht_destroy(hash_table);
////
////    return 0;
//}

//#include "Cache_Mng.h"
//#include "Cache_Mng_API.h"
//#include <assert.h>
//
//#define NUM_IMAGES_IN_RANGE 10 // Define how many images we want in the range for testing
//
////mock functions
//
//int disk_Mng_getImagesIdInRangedByTwoPoints(Point_t topLeft, Point_t bottomRight, int* arrayOfImagesId,int cacheSize) {
//    // Fill array with dummy image IDs within a specific range
//    for (int i = 0; i < NUM_IMAGES_IN_RANGE; i++) {
//
//        arrayOfImagesId[i] = i + 251;
//    }
//
//    return NUM_IMAGES_IN_RANGE;
//}
//
//bool disk_Mng_loadImageFromDiskToCache_internal(int imageId, int* address) {
//    //mock function  load images  in cache
//    return true;
//}
//
//bool prefetch_IsTheImageInPrefetchLoading(Point_t topLeft, Point_t bottomRight)
//{
//    return false;
//}
//void prefetch_InsertNewRangeToPrefetch(Point_t topLeft, Point_t bottomRight) {
//    //mock function insert new range to prefetch
//}
//
////tests functions
//
//void test_LinklistNode_create()
//{
//    //arrange
//    // not get parameters
//    //act
//    LinkedListNode_t* t = node_create();
//    //assert
//    assert(t->imageInfo == NULL && "image not null");
//    assert(t->next == NULL && "next not null");
//    assert(t->prev == NULL && "prev not null");
//    printf("test test_LinklistNode_create passed!\n");
//}
//
//void test_HashInfo_create()
//{
//    //arrange
//    int imageId = 1;
//    LinkedListNode_t* linkedListNode = node_create();
//    //act
//    HashInfo_t* hashInfo = hashInfo_create(imageId, linkedListNode);
//    //assert
//    assert(hashInfo->imageId == imageId && "image id not correct\n");
//    assert(hashInfo->linkPointer == linkedListNode && "link pointer not correct\n");
//    printf("test test_HashInfo_create passed!\n");
//}
//
//
//void test_imageInfo_create()
//{
//    //arrange
//    int imageId = 1;
//    LinkedListNode_t* linkedListNode = node_create();
//    HashInfo_t* hashPointer = hashInfo_create(imageId, linkedListNode);
//    int* cachePointer = NULL;
//    //act
//    ImageInfo_t* t = imageInfo_create(imageId, hashPointer, cachePointer);
//    //assert
//    assert(t->imageId == imageId);
//    assert(t->hashPointer == hashPointer);
//    assert(t->cachePointer == cachePointer);
//    printf("test test_ImageInfo_create passed!\n");
//}
//
//void test_queue_createQueueNode()
//{
//    //arrange
//    int* address = NULL;
//    //act
//    QueueNode_t* queueNode = queue_createQueueNode(address);
//    //assert
//    assert(queueNode->address == address);
//    assert(queueNode->next == NULL);
//    printf("test test_Queue_createQueueNode passed!\n");
//
//}
//
//void test_LinkedList_initialize()
//{
//    //arrange
//    // not get parameters
//    //act
//    cache_initialize_CB();
//    linkedList_initialize();
//    //assert
//    assert(cache_mng_CB->cache_LRU->head == NULL);
//    assert(cache_mng_CB->cache_LRU->tail == NULL);
//    assert(cache_mng_CB->cache_LRU->size == 0);
//    printf("test test_LinkedList_initialize passed!\n");
//}
//
//
//void test_Queue_initialize()
//{
//    //arrange
//    // not get parameters
//    //act
//    cache_initialize_CB();
//    queue_initialize();
//    //assert
//    assert(cache_mng_CB->cache_EmptyAddresses->front == NULL);
//    assert(cache_mng_CB->cache_EmptyAddresses->rear == NULL);
//    assert(cache_mng_CB->cache_EmptyAddresses->size == 0);
//    printf("test test_Queue_initialize passed!\n");
//}
//
//void test_HashTable_initialize()
//{
//    //arrange
//    // not get parameters
//    //act
//    cache_initialize_CB();
//    hashTable_initialize();
//    //assert
//    assert(cache_mng_CB->cache_ByImageId->length == 0);
//    assert(cache_mng_CB->cache_ByImageId->size == CACHE_SIZE);
//    assert(cache_mng_CB->cache_ByImageId->entries != NULL);
//    for (int i = 0; i < CACHE_SIZE; i++) {
//        assert(cache_mng_CB->cache_ByImageId->entries[i] == NULL && "cache_ByImageId entries[i] is not NULL");
//    }
//    printf("test test_HashTable_initialize passed!\n");
//}
//
//void test_ram_initialize()
//{
//    //arrange
//    // not get parameters
//        //act
//    ram_initialize();
//    //assert
//    printf("test test_ram_initialize passed!\n");
//
//}
//
//void test_linkedList_insert()
//{
//    //arrange
//    LinkedListNode_t* node1 = node_create();
//    LinkedListNode_t* node2 = node_create();
//    LinkedListNode_t* node3 = node_create();
//    //act
//    cache_initialize_CB();
//    linkedList_initialize();
//    linkedList_insert(node1);
//    //assert
//    assert(cache_mng_CB->cache_LRU->head == node1 && "head should be node1");
//    assert(cache_mng_CB->cache_LRU->tail == node1 && "tail should be node1");
//    assert(cache_mng_CB->cache_LRU->size == 1 && "size should be 1");
//    assert(node1->prev == NULL && "node1 prev should be NULL");
//    assert(node1->next == NULL && "node1 next should be NULL");
//
//    // Insert the second node
//    linkedList_insert(node2);
//    assert(cache_mng_CB->cache_LRU->head == node2 && "head should be node2");
//    assert(cache_mng_CB->cache_LRU->tail == node1 && "tail should still be node1");
//    assert(cache_mng_CB->cache_LRU->size == 2 && "size should be 2");
//    assert(node2->prev == NULL && "node2 prev should be NULL");
//    assert(node2->next == node1 && "node2 next should be node1");
//    assert(node1->prev == node2 && "node1 prev should be node2");
//
//    // Insert the third node
//    linkedList_insert(node3);
//    assert(cache_mng_CB->cache_LRU->head == node3 && "head should be node3");
//    assert(cache_mng_CB->cache_LRU->tail == node1 && "tail should still be node1");
//    assert(cache_mng_CB->cache_LRU->size == 3 && "size should be 3");
//    assert(node3->prev == NULL && "node3 prev should be NULL");
//    assert(node3->next == node2 && "node3 next should be node2");
//    assert(node2->prev == node3 && "node2 prev should be node3");
//    assert(node2->next == node1 && "node2 next should still be node1");
//    assert(node1->prev == node2 && "node1 prev should still be node2");
//    printf("test test_linkedList_insert passed!\n");
//
//}
//void test_linkedList_moveToHead()
//{
//    //arrange
//    LinkedListNode_t* node1 = node_create();
//    LinkedListNode_t* node2 = node_create();
//    //act
//    cache_initialize_CB();
//    linkedList_initialize();
//    linkedList_insert(node1);
//    linkedList_insert(node2);
//    linkedList_moveToHead(node1);
//    //assert
//    assert(cache_mng_CB->cache_LRU->head == node1);
//    printf("test linkedList_moveToHead passed!\n");
//}
//
//void test_hashTable_insert()
//{
//    //arrange
//    int imageId = 1;
//    LinkedListNode_t* linkedListNode = node_create();
//    HashInfo_t* hashInfo = hashInfo_create(imageId, linkedListNode);
//    //act
//    cache_initialize_CB();
//    hashTable_initialize();
//    hashTable_insert(hashInfo);
//    //assert
//    int index1 = hashTable_function(hashInfo->imageId);
//    assert(cache_mng_CB->cache_ByImageId->entries[index1] == hashInfo && "hashInfo1 should be at index1");
//    assert(cache_mng_CB->cache_ByImageId->length == 1 && "length should be 1");
//
//    printf("test test_hashTable_insert passed!\n");
//}
//
//void test_queue_enqueue()
//{
//    //arrange
//    int* address = NULL;
//    //act
//    cache_initialize_CB();
//    queue_initialize();
//    queue_enqueue(address);
//    //assert
//    assert(cache_mng_CB->cache_EmptyAddresses->front->address == address);
//    assert(cache_mng_CB->cache_EmptyAddresses->rear->address == address);
//    assert(cache_mng_CB->cache_EmptyAddresses->size == 1);
//    printf("test test_queue_enqueue passed!\n");
//}
//void test_queue_isEmpty()
//{
//    //arrange
//    int* address = NULL;
//    //act
//    cache_initialize_CB();
//    queue_initialize();
//    //assert
//    assert(queue_isEmpty() == true);
//    queue_enqueue(address);
//    assert(!queue_isEmpty());
//    printf("test test_queue_isEmpty passed!\n");
//
//}
//void test_queue_initializeWithEmptyAddresses()
//{ //arrange
//// not get parameters
////act
//    cache_initialize_CB();
//    queue_initialize();
//    ram_initialize();
//    queue_initilaizeWithEmptyAddresses();
//    //assert
//    assert(!queue_isEmpty());
//    printf("test test_queue_initilaizeWithEmptyAddresses passed!\n");
//
//}
//void test_queue_dequeue()
//{
//    //arrange
//    int* address = NULL;
//    //act
//    cache_initialize_CB();
//    queue_initialize();
//    ram_initialize();
//    queue_enqueue(address);
//    queue_dequeue();
//    //assert
//    assert(cache_mng_CB->cache_EmptyAddresses->front == NULL);
//    assert(cache_mng_CB->cache_EmptyAddresses->rear == NULL);
//    assert(cache_mng_CB->cache_EmptyAddresses->size == 0);
//
//    printf("test test_queue_dequeue passed!\n");
//
//}
//void test_linkedList_deleteNode()
//{
//    //arrange
//    LinkedListNode_t* node1 = node_create();
//    LinkedListNode_t* node2 = node_create();
//
//    //act
//    cache_initialize_CB();
//    linkedList_initialize();
//    linkedList_insert(node1);
//    linkedList_insert(node2);
//    linkedList_deleteNode(node1);
//    //assert
//    assert(cache_mng_CB->cache_LRU->head == node2);
//    assert(cache_mng_CB->cache_LRU->tail == node2);
//    assert(cache_mng_CB->cache_LRU->size == 1);
//
//    linkedList_deleteNode(node2);
//    assert(cache_mng_CB->cache_LRU->head == NULL);
//    assert(cache_mng_CB->cache_LRU->tail == NULL);
//    assert(cache_mng_CB->cache_LRU->size == 0);
//
//    printf("test test_linkedList_deleteNode passed!\n");
//
//}
//void test_hashTable_delete()
//{
//    //arrange
//    int imageId = 1;
//    LinkedListNode_t* linkedListNode = node_create();
//    HashInfo_t* hashInfo = hashInfo_create(imageId, linkedListNode);
//    //act
//    cache_initialize_CB();
//    hashTable_initialize();
//    hashTable_insert(hashInfo);
//    hashTable_delete(hashInfo);
//    //assert
//    int index1 = hashTable_function(hashInfo->imageId);
//    assert(cache_mng_CB->cache_ByImageId->entries[index1] == NULL);
//    assert(cache_mng_CB->cache_ByImageId->length == 0);
//
//    printf("test test_hashTable_delete passed!\n");
//}
//void test_hashTable_function()
//{
//    //arrange
//    int imageId1 = 5;
//    int imageId2 = 102;
//    int imageId3 = 256;
//    //act
//    hashTable_function(imageId1);
//    //assert
//    assert(hashTable_function(imageId1) == imageId1 % CACHE_SIZE);
//    assert(hashTable_function(imageId2) == imageId2 % CACHE_SIZE);
//    assert(hashTable_function(imageId3) == imageId3 % CACHE_SIZE);
//
//    printf("test test_hashTable_function passed!\n");
//}
//void test_hashTable_search()
//{
//    //arrange
//    int imageId = 1;
//    LinkedListNode_t* linkedListNode = node_create();
//    HashInfo_t* hashInfo = hashInfo_create(imageId, linkedListNode);
//    //act
//    cache_initialize_CB();
//    hashTable_initialize();
//    hashTable_insert(hashInfo);
//    //assert
//    assert(hashTable_search(imageId) == hashInfo);
//
//    printf("test test_hashTable_search passed!\n");
//}
//void test_cache_addImageToTheCacheMapping()
//{
//    //arrange
//    int imageId = 1;
//    //act
//    cache_initialize();
//    cache_addImageToTheCacheMapping(imageId);
//    printf("test test_cache_addImageToTheCacheMapping passed!\n");
//}
//void test_cache_deleteImageFromCacheMapping()
//{
//    //arrange
//    int imageId = 1;
//    //act
//    cache_initialize();
//    cache_addImageToTheCacheMapping(imageId);
//    HashInfo_t* hashInfo = hashTable_search(imageId);
//    LinkedListNode_t* node = hashInfo->linkPointer;
//    cache_deleteImageFromCacheMapping(node);
//    //assert
//    assert(hashTable_search(imageId) == NULL);
//
//    printf("test test_cache_deleteImageFromCacheMapping passed!\n");
//
//}
//void test_cache_deleteImageByLRU()
//{
//    //arrange
//    // not get parameters
//    //act
//    cache_initialize();
//    for (int i = 0; i < CACHE_SIZE; i++) {
//        cache_addImageToTheCacheMapping(i);
//    }
//    cache_deleteImageByLRU();
//    //assert
//    assert(cache_mng_CB->cache_LRU->size == CACHE_SIZE - (CACHE_SIZE / 10));
//
//    printf("test test_cache_deleteImageByLRU passed!\n");
//
//}
//void test_cache_deleteImageByImageId()
//{
//    //arrange
//    int imageId = 1;
//    //act
//    cache_initialize();
//    cache_addImageToTheCacheMapping(imageId);
//    assert(hashTable_search(imageId) != NULL);
//
//    cache_deleteImageByImageId(imageId);
//    //assert
//    assert(hashTable_search(imageId) == NULL);
//    printf("test test_cache_deleteImageByImageId passed!\n");
//
//}
//void test_cache_getRange_internal()
//{
//    // Arrange
//    Point_t topLeft = { 0, 0 }; // Define the top-left corner of the range
//    Point_t bottomRight = { 10, 10 }; // Define the bottom-right corner of the range
//    int imageId = 2;
//    //act
//    cache_initialize();
//    for (int i = 0; i < CACHE_SIZE; i++) {
//        cache_addImageToTheCacheMapping(i);
//    }
//    int** result = cache_getRange_internal(topLeft, bottomRight);
//
//    // Assert
//    assert(result != NULL);
//    for (int i = 0; i < NUM_IMAGES_IN_RANGE; i++) {
//        assert(result[i] != NULL);
//    }
//    printf("test_cache_getRange_internal passed!\n");
//}
//
//void test_cache_LoadingImagesInRangeToCache()
//{
//    // Arrange
//    Point_t topLeft = { 0, 0 };
//    Point_t bottomRight = { 10, 10 };
//    // act
//    cache_initialize();
//    for (int i = 0; i < CACHE_SIZE; i++) {
//        cache_addImageToTheCacheMapping(i);
//    }
//    cache_LoadingImagesInRangeToCache(topLeft, bottomRight);
//    //assert
//    assert(cache_mng_CB->sourceForAPICall == PREFETCH_CALL);
//    printf("test_cache_LoadingImagesInRangeToCache passed!\n");
//
//}
//
//void test_cache_getImagesPointersInRangeFromMaster()
//{
//    // Arrange
//    Point_t topLeft = { 0, 0 };
//    Point_t bottomRight = { 10, 10 };
//    // act
//    cache_initialize();
//    for (int i = 0; i < CACHE_SIZE; i++) {
//        cache_addImageToTheCacheMapping(i);
//    }
//    int** result = cache_getImagesPointersInRangeFromMaster(topLeft, bottomRight);
//    //assert
//    assert(result != NULL);
//    assert(cache_mng_CB->sourceForAPICall == MASTER_CALL);
//    printf("test_cache_getImagesPointersInRangeFromMaster passed!\n");
//
//}
//
//int main() {
//    test_LinklistNode_create();
//    test_HashInfo_create();
//    test_ImageInfo_create();
//    test_Queue_createQueueNode();
//    test_LinkedList_initialize();
//    test_HashTable_initialize();
//    test_ram_initialize();
//    test_linkedList_insert();
//    test_hashTable_insert();
//    test_queue_isEmpty();
//    test_queue_enqueue();
//    test_queue_dequeue();
//    test_Queue_initialize();
//    test_queue_initilaizeWithEmptyAddresses();
//    test_linkedList_moveToHead();
//    test_linkedList_deleteNode();
//    test_hashTable_delete();
//    test_hashTable_function();
//    test_hashTable_search();
//    test_cache_addImageToTheCacheMapping();
//    test_cache_deleteImageFromCacheMapping();
//    test_cache_deleteImageByLRU();
//    test_cache_deleteImageByImageId();
//    test_cache_getRange_internal();
//    test_cache_LoadingImagesInRangeToCache();
//    test_cache_getImagesPointersInRangeFromMaster();
//    return 0;
//}

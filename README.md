Drone cameras
This project presents the tasks for which I was responsible in the general project as part of the practicum in which 50 software engineers participated.

Cache management of slave
I managed the cache very efficiently using the C language and DOCTEST tests in the C++ language
handling adding an image to the cache,
Deleting an image in case the disk sent a deletion request
or deletion in case the space in the saved file runs out,
This erasure uses LRU to achieve the most efficient erasure,
As well as retrieving images on request from the master or the PREFETCH

Disk management of the Master
I managed the disk very efficiently using the C language and DOCTEST tests in the C++ language
handling adding an image to the disk,
Delete in case the disk is full,
This erasure uses LRU to achieve the most efficient erasure considering the size of the maps stored on disk that are not the same size,
Searching the mother map is on the disk using SYCL.

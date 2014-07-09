// Use two data structure: hash table and min-heap. min-heap is key-value: thread lanuch time and thread id. hash-table is key-value: thread-id and min-heap addr.
// There is a dispatch thread check whether the current time is equal to the top node of min-heap. If so, lanuch the top thread and delete from min heap
// and hash table. For add and deletion opertion, another thread modify the min-heap and hash table, so need to use lock to protect hash table and min-heap.

// For data could be held in one single machine, we use a min-heap and hash table (match the job to the node in min_heap to speedup deletion)
// For deletion operation, find the heap node through hash table, replace it with the last node in heap. If the new node is smaller than its parent, then shiftup, else, shiftdown.
// For date could not be held in one machine, firstly, use a hash function and spread jobs into diffirent servers equally, then each server mantains one min-heap and hash table.
// For the highest priority, the server query each client for its locally highest priority job and then find the highest one.

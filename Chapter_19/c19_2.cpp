// 1. Use solution in Chapter 12.14 and 12.15.
// 2. Use solution: inverted indices:
// For each word, record its occured location in linked lisk, location is defined by document ID and offset in document.
// The location sequence is sorted: first is document ID and then offset in document.
// Looking for document is intersection of location sequence of each word.
// Catch most frequent queries and only search popular documents. 

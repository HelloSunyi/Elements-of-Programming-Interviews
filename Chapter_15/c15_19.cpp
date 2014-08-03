// Classical memorization + recursion
// For each node r, it could assigned as high or low:
// Low: L(r) = l(r) + H(c), c is child of r
// High: H(r) = h)r) + min(H(c), L(c)), c is child of r
// Use hash(node, low/high) to store the value;

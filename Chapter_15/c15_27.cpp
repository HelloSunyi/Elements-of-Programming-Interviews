// For each node, get the max weighted sum value of u: m(u) = w(u) + max(w(c)), c is child of u. Bottom to top, O(n)
// m(t) is the max sum value; update each node from top to bottom, s is inited to w(t), w'(u) = w(u) + m(t) - (s + m(u)); s = s + w'(u);

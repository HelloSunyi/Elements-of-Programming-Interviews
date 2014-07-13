// To avoid deadlock, we could use a centralized solution: a controller knows which resource is in use and potential conflict.
// Another solution is for each thread, acquire resource lock in increasing order and release in decreasing order. For thread n-1, acquire 0 before n-1.

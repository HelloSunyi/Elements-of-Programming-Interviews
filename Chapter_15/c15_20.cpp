// Use Recursion + memoryzaiton
// image[{n,0}][{0,m}] = min(image[{n, i}][{0,j}] + image[{i, n}][{n,j}] + image[{n-i, 0}][{0,n-j}] + image[{n-i, i}][{n-j,j}] (0 <= i <= n, 0 <= j))
// Use hash to accelerate

class Solution {
public:
    int findk(int A[], int m, int B[], int n, int k, int p, int q){
        if(p>q)
          return findk(B, n, A, m,k, 0, n-1);
        int i=p+(q-p)/2;
        int j=k-1-(i+1);
        if((j<0||(j<n&&A[i]>=B[j]))&&(j+1==n||(j+1>=0 &&A[i]<=B[j+1])))
          return A[i];
        else if(j<0 ||(j+1<n&&A[i]>B[j+1]))
          return findk(A,m,B,n,k,p,i-1);
        else
          return findk(A,m,B,n,k,i+1,q);
    }
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if((m+n)%2==1)
          return findk(A,m,B,n,(m+n)/2+1,0,m-1);
        else
          return (double)(findk(A,m,B,n,(m+n)/2+1,0,m-1)+findk(A,m,B,n,(m+n)/2,0,m-1))/2;
    }
};

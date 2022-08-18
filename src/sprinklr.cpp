






void func(long int l , long int r, vector<int> A){
+ 
    long  m = l + (r-l)/2;

    if(A[m] > A[m-1] && A[m] < A[m+1]) func(m , r , A);
    if(A[m] < A[m-1] && A[m] > A[m+1] ) func(l , m , A);


    if(l==r) ans = A[l];

    return

}
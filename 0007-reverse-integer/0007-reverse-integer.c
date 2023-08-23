int reverse(int x){
    long long rev= 0;
    int x2 = x ;
    int rem=1 ;
    while(x != 0)
    {
        rem = x % 10 ;
        rev = (rev * 10 )+rem;
        x = x/10;
    }
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0; 
    }
    return rev;
}
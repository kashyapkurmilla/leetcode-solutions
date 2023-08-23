bool isPalindrome(int x){
  int rem = 0 , x2 = x;
  long long reversed = 0 ;
  if(x<0)
  {
    return false ;
  }
  while(x !=0)
  {
    rem = x % 10 ;
    reversed = (reversed *10) + rem;
    x = x/10;
  }
  if(x2 == reversed)
    return true;
  else
    return false;
}
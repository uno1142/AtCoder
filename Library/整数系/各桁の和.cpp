int digit_sum(ll n){
   if(n < 10)  return n;
   return digit_sum(n/10) + n%10;
}
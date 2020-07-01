bool is_Prime(ll N){
  if(N == 1)return false;
  for(ll i =2; i*i <= N; i++){
    if(N % i == 0)return false;
  }
  return true;
}

//※using ll = long long;

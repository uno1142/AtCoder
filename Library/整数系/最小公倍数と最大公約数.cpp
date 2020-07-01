using ll = long long;

//最大公約数
ll gcd(ll a, ll b){
  if(a % b == 0)return b;
  else return gcd(b,a%b);
}

//最小公倍数※gcdとセットで使うこと
ll lcm(ll a, ll b){
  return a * b / gcd(a,b);
}

ll eadivs(ll x){ll ret=0;ll i;for(i=1;i*i<=x;i++){if(x%i==0 && i*i!=x) ret+=i+x/i;if(x%i==0 && i*i==x) ret+=i;}return ret;}

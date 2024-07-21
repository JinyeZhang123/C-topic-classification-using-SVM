vector<ll> binary_expansion(ll n){vector<ll> B(high_order_bit(n)+1);ll tmp=n;for(ll i=high_order_bit(n);i>=0;i--){B[i]=tmp/pw2[i];tmp%=pw2[i];}return B;}

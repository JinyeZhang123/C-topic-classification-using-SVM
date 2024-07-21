int keta_wa(ll x){ if(x<10){return x;} else{return keta_wa(x/10) + x%10;} }

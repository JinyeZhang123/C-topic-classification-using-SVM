bool isprm(LL a){if(a==1)return false; for(LL i=2;i*i<=a;i++){if(a%i==0)return false;}return true;}

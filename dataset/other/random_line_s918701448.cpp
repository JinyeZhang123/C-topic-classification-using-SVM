//V<ll>Fac,Rac;void setF(int n,int m=MOD){Fac=Rac=V<ll>(++n);Fac[0]=1;FOR(i,1,n)Fac[i]=Fac[i-1]*i%m;Rac[n-1]=modInv(Fac[n-1],m);FORR(i,n-1,1)Rac[i-1]=Rac[i]*i%m;}

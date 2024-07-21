inline void rd(unsigned int *x){int k,m=0;*x=0;for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){*x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||k>'9')break;*x=(*x)*10+k-'0';}if(m)(*x)=-(*x);}

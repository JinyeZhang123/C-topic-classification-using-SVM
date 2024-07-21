void ex(int &x,int a,int b){if(a!=b&&((x>>a)&1)!=((x>>b)&1))x^=(1<<a)^(1<<b);}

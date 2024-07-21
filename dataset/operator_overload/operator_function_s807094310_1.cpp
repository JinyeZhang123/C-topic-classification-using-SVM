void operator delete(void *) {}

int f[N];
int a[N];

int st(int n,int k)
{
    int res=1;
    while(k){
        if (k%2==1){
            res=(res*n)%mod;
        }
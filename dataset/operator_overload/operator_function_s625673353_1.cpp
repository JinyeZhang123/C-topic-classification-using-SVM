void operator delete(void *) {}

int f[N],st2[N];
int rev[N];

int st(int n,int k)
{
    int res=1;
    while(k){
        if (k%2==1){
            res=(res*n)%mod;
        }
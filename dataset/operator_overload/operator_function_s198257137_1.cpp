void operator delete(void *) {}

int st[50];

main ()
{
    st[0]=1;
    for (int i=1;i<35;++i){
        st[i]=st[i-1]*2;
    }
void operator delete(void *) {}

int n;
int a[N];
vector<int>b;

bool check(int x)
{
    if (x==1){
        if (b.size()>0)return 0;
        return 1;
    }
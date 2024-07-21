void operator delete(void *) {}

int n;
string s[N];
int cnt[N*27],kol[26];
int nxt[N][26];
int all=1;

int next(int s,int c)
{
    if (!nxt[s][c]){
        ++all;
        nxt[s][c]=all;
    }
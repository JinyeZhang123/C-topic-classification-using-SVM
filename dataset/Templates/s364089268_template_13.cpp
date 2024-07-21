template<class T>bool input(T &t){int n=1,c;for(t=0;!isdigit(c=getchar())&&~c&&c-45;);
if(!~c)return 0;for(c-45&&(n=0,t=c^48);isdigit(c=getchar());)t=10*t+c-48;t=n?-t:t;return 1;}
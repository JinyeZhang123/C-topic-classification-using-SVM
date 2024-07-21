template<typename T>
int partition(T *a,int p,int r){
    T x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            T tmp=a[i]; a[i]=a[j]; a[j]=tmp;
        }
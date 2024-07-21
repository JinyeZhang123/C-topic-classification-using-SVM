template<typename Iterator>
    void init(Iterator beg, Iterator end) {
        for(int idx=n; beg!=end; beg++, idx++)
            data[idx]=*beg;
 
        for(int idx=n-1; idx>=1; idx--)
            data[idx]=plus(data[idx*2], data[idx*2+1]);
    }
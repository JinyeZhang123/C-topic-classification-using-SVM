template <typename Type=int> class SegmentTree{
    public:
        int strnum;
        int strbeg;
        int nodemax;
        std::unique_ptr<Type[]> node;
        std::unique_ptr<std::pair<int,int>[]> noderange;

        SegmentTree(int a){
            strnum=a;
            strbeg=1;
            while(strbeg<strnum)strbeg*=2;
            strbeg-=1;
            nodemax=strbeg*2+1;
            node.reset(new Type[nodemax]);
            noderange.reset(new std::pair<int,int>[nodemax]);
            noderange[0]=std::make_pair(0,nodemax-strbeg-1);
            for(int i=1;i<nodemax;i++){
                int parent=(i-1)/2;
                int parentleft=noderange[parent].first;
                int parentright=noderange[parent].second;
                if(parent*2+1==i){
                    noderange[i]=std::make_pair(parentleft,(parentright+parentleft)/2);
                }
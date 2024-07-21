template <class T> struct TreeDiameter {
    
    
    TreeDiameter(int size){
        G.resize(size),dist.resize(size,-1);
    }
template<typename Data,typename T>
struct ReRooting{
    struct Node{
        int to,rev;
        Data data;
        Node(int to,int rev,Data data):to(to),rev(rev),data(data){}
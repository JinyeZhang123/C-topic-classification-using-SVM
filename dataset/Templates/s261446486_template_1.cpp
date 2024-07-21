template <typename T>
class Segment_tree{
public:
    Segment_tree(int origin_data_num){
        data_num = origin_data_num;
        width = 1;
        depth = 1;
        while(width<data_num){
            width *= 2;
            depth++;
        }
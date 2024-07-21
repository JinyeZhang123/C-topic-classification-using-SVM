template<typename T>
struct RAQ {
	vector< T > data1, data2;
    const int maxSize = (1 << 18) - 1;

    RAQ(){
            data1.assign(maxSize, 0);
            data2.assign(maxSize, 0);
    }
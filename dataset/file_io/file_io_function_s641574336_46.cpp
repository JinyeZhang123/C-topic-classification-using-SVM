int main(){
    int N; int D; int count=0;
    int x; int y; 

    //ifstream myfile;
    //myfile.open("sample.txt");
    cin >> N >> D;

    double max_squared_distance = pow(D,2);
    map<pair<int,int>,double> m;
    
    while(N--){
        cin >> x >> y;
        if(abs(x) > D || abs(y)> D){
            continue;
        }
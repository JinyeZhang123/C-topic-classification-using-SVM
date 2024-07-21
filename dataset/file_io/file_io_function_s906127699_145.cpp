int main(){
    int n, m, i, j, which;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while(true){
        Place places[100];
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
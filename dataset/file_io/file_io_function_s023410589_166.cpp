int main()
{
//    ifstream fin("input.txt");

    while(1){
        int n;
        cin >> n;
        if(n == 0)break;

        int sample_m;
        cin >> sample_m;
//        scanf("%d", &sample_m);
        vector<vector<xy_t> > sample(8);
        for(int i = 0; i < 8; i++){
            sample[i].resize(sample_m);
        }
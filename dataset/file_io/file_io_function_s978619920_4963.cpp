int main(){
    prep();
    ofstream fout("sleepy.out");
    ifstream fin("sleepy.in");
    // test on if you don't need to make any changes
    cin >> n;
    
    for (int i=0; i<n; i++){
      cin >> arr[i];
      sums[i] = arr[i];
    }
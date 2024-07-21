int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");


    ll w,h;
    cin >> w >> h;
    for(int i = 0;i < w;i++)cin >> arr[i].val,arr[i].place = 2;
    for(int i = 0;i < h;i++)cin >> arr[i + w].val,arr[i + w].place = 1;
    sort(arr,arr  + w + h);
    ll place1 = 0,place2 = 0;
    ll ans = 0;
    for(int i = 0;i < w + h;i++){
        if(arr[i].place == 1){
        ans += (max((w - place2 + 1), 0LL) * arr[i].val);
        place1++;
        }
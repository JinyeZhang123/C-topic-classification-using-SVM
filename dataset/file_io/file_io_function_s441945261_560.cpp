int main(){
    //ifstream cin("input.txt");
    string line;
    while(getline(cin,line)){
        stringstream ss_line(line);        
        // input equation data
        double a,b,c,d,e,f;
        ss_line >> a >> b >> c >> d >> e >> f;
        // solve the equation
        xy result;
        if (a != 0)
            result = solve(a,b,c,d,e,f);
        else    // d != 0 since the equation has an answer 
            result = solve(d,e,f,a,b,c);
        cout << fixed << setprecision(3) << result.x << " " << result.y << endl;
    }
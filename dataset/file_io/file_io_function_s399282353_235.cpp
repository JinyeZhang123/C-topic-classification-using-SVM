int main(int argc, char const *argv[])
{
	//ifstream cin("input.txt");
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	//cout<<(float)ceil(c/b)<<" "<<ceil(a/d);

	if(ceil(c/b) <= ceil(a/d))
		cout<<"Yes";
	else 
		cout<<"No";
	
}
int main(int , char **)
{
#ifdef LOCAL_DEBUG
	struct stat sb;
	ifstream in("/dev/shm/input.txt");
	if (stat("/dev/shm/input.txt",&sb)==0){ cin.rdbuf(in.rdbuf()); }
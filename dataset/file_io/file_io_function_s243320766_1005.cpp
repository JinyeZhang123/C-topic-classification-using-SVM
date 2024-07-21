int main(void) {
    
    //ifstream ifs;
    int num;
    
    //ifs.open("./input.txt", ios::in);
    
    //ifs >> num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        treeNodes[i].parent = treeNodes[i].left = treeNodes[i].right = NIL;
    }
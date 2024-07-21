int main(void) {
    //ifstream ifs;
    //ifs.open("./input.txt", ifstream::in);
    
    int num, key;
    string command;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> command;
        if(command[0] == 'i') {
            cin >> key;
            insert(key);
        }
#include <iostream>
using namespace std;
void say(string word);
int main(){
    int hello = 0;
    cout << hello << endl;
    cout << "Hello world" << endl;
    say("hello");
    return 0;
}

void say(string word){
    cout << word << endl;
}
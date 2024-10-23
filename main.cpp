#include <iostream>
using namespace std;

void say(string word);
int add(int a, int b);
int main(){
    int hello = 0;
    cout << hello << endl;
    cout << "Hello world" << endl;
    say("hello");
    return 0;
}

void say(string word){
    cout << word << endl;
    cout << "5 + 7 = " << add(5, 7) << endl;
}

int add(int a, int b){
    return a + b;
}
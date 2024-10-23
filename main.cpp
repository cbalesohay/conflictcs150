#include <iostream>
using namespace std;

void say(string word);
// int add(int a, int b);
int main(){
    cout << "Hello world" << endl;
    cout << "5 + 7 = " << add(5, 7) << endl;
    say("hello");
    return 0;
}

void say(string word){
    cout << word << endl;
}

int add(int a, int b){
    
    int temp = a;
    a = b;
    b = temp;
    return a + b;
}
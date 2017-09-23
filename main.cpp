#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string fullname;
    cout << "What is your name? " << endl;
    getline(cin, fullname);
    cout << "Hello " + fullname << endl;
    return 0;
}
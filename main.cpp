#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    string fullname;

    for (int i = 1; i < argc ; ++i) {
           fullname += argv[i];
           fullname += " ";
    }

    if(fullname.length() == 0){
        cout << "Hello World!" << endl;
    } else {
        cout << "Hello " + fullname << endl;
    }

    return 0;
}
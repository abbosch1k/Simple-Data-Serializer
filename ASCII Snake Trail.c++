#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    string snake="🐍";
    for(int i=0;i<30;i++) {
        cout << string(i,' ') << snake << endl;
        usleep(100000);
    }
    return 0;
}

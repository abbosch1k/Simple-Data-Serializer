#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string file, outFile;
    int key;
    cout << "Enter file name: ";
    cin >> file;
    cout << "Enter output file: ";
    cin >> outFile;
    cout << "Enter key (number): ";
    cin >> key;

    ifstream in(file, ios::binary);
    ofstream out(outFile, ios::binary);

    char c;
    while (in.get(c)) {
        out.put(c ^ key);
    }
}

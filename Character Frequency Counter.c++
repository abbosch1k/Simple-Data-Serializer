#include <iostream>
#include <map>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    map<char,int> freq;
    for (char c : text) freq[c]++;
    for (auto &p : freq)
        cout << "'" << p.first << "' : " << p.second << "\n";
}

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    for(int i=0;i<=20;i++){
        system("clear"); // "cls" for Windows
        cout<<"Loading [";
        for(int j=0;j<i;j++) cout<<"#";
        for(int j=i;j<20;j++) cout<<" ";
        cout<<"] "<<i*5<<"%\n";
        this_thread::sleep_for(chrono::milliseconds(200));
    }
    cout<<"Done!\n";
    return 0;
}

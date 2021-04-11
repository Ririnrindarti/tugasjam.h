#include <iostream>
#include "jam.h"
// #include <string>
using namespace std;

// class myClass {
//     public: 
//         int myNum;
//         string myString;
// };
// class myClass {
//     public: 
//         void myMethod() {
//             cout << "Hello Word";
//         }
// };

int main() {
    // myClass myObj;
    myJam jam;
    string cmd;
    cout << "Perintah: ";
    cin >> cmd;

    if (cmd == "getjam") {
        jam.getJam();
        return main();
    } else if(cmd == "exit") {
        cout << "Keluar";
        return 0;
    } else {
        cout << "======================================= Daftar Perintah ================================ "<< "\n";
        cout << "=> ketik getjam "<< "\n";
        cout << "======================================= Daftar Perintah ================================ "<< "\n";
        return main();
    }
     
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

   
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile <<   sum << endl;
        outFile.close();
        cout << "ket qua da duoc ghi vao output"<<endl;
    } else {
        cout << "khong the mo tep" << endl;
    }
    ifstream inFile("output.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "loi!" << endl;
    }

    return 0;
}

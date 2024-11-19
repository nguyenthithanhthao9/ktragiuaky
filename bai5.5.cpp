#include <bits/stdc++.h>
using namespace std;
int main(){
 ofstream file("asc.txt");
    if (file.is_open()) {
        for (int code = 48; code <= 127; ++code) {
file << code << ": " << static_cast<char>(code) << endl;
        }
        file.close();
    } else {
      cout << "khong the mo tep" << endl;
    }

    return 0;
}


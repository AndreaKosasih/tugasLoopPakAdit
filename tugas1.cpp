#include <iostream>
using namespace std;

void reverse(string &);
void print(string &);

int main() {
    string angka; cin >> angka; 
    reverse(angka);
    print(angka);
    return 0; 
}

void reverse(string &str) {
    int kiri = 0;
    int kanan = str.length() - 1;
    while (kiri < kanan) {
        char temp = str[kiri];
        str[kiri] = str[kanan];
        str[kanan] = temp;
        kiri++;
        kanan--;
    }
}

void print(string &str) {
    cout << str << endl; 
}
#include <iostream>
using namespace std;

class Segitiga {

    public:
        int alas, tinggi;
        void inputData() {
            cout << "Masukkan Alas Segitiga";
            cin >> alas;
            cout << "Masukkan Tinggi Segitiga";
            cin >> tinggi;
        }

    private:
        float luas(int alas, int tinggi) {
            return 0.5 * alas * tinggi;
        }
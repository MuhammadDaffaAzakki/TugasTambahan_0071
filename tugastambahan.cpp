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

    public:
        void outputData() {
            if (alas % 2 == 0) {
            float hasil = luas(alas, tinggi);
            cout << "Luas Segitiga" << hasil << "cm";
        } else {
            cout << "Alas yang dimasukkan adalah bilangan ganjil, luas tidak dapat dihitung";
        }
    }
};
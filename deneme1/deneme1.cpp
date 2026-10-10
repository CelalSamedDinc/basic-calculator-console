#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double modHesapla(double bolunen, double bolen) {
    return fmod(bolunen, bolen);
}

long long faktoriyelHesapla(int n) {
    long long sonuc = 1;
    for (int i = 1; i <= n; ++i) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    double sayi1, sayi2 = 0;
    string islem;
    char devamMi;

    double sonSonuc = 0;
    bool sonuclaDevam = false;

    do {
        if (sonuclaDevam) {
            sayi1 = sonSonuc;
            cout << "Birinci sayi (onceki sonuc): " << sayi1 << endl;
        }
        else {
            cout << "Birinci sayiyi giriniz: ";
            cin >> sayi1;
        }

        cout << "Islemi secin (+, -, *, /, %, mod, !, ^): ";
        cin >> islem;

        while (islem != "+" && islem != "-" && islem != "*" && islem != "/" && islem != "%" && islem != "mod" && islem != "!" && islem != "^") {
            cout << "Gecersiz islem! Lutfen +, -, *, /, %, mod, ! veya ^ secin: ";
            cin >> islem;
        }

        if (islem != "!") {
            cout << "Ikinci sayiyi giriniz: ";
            cin >> sayi2;
        }

        if (islem == "+") {
            sonSonuc = sayi1 + sayi2;
            cout << "Sonuc: " << sonSonuc << endl;
        }
        else if (islem == "-") {
            sonSonuc = sayi1 - sayi2;
            cout << "Sonuc: " << sonSonuc << endl;
        }
        else if (islem == "*") {
            sonSonuc = sayi1 * sayi2;
            cout << "Sonuc: " << sonSonuc << endl;
        }
        else if (islem == "/") {
            if (sayi2 == 0) {
                cout << "Hata: Bir sayi 0'a bolunemez!" << endl;
                sonuclaDevam = false; 
            }
            else {
                sonSonuc = sayi1 / sayi2;
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "%") {
            sonSonuc = (sayi1 * sayi2) / 100.0;
            cout << "Sonuc: " << sonSonuc << endl;
        }
        else if (islem == "mod") {
            if (sayi2 == 0) {
                cout << "Hata: 0'a gore mod alinamaz!" << endl;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = modHesapla(sayi1, sayi2);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "!") {
            if (sayi1 < 0) {
                cout << "Hata: Negatif sayilarin faktoriyeli tanimsizdir!" << endl;
                sonuclaDevam = false;
            }
            else if (sayi1 > 20) {
                cout << "Hata: Sonuc cok buyuk oldugu icin 20'den buyuk sayilar hesaplanamaz!" << endl;
                sonuclaDevam = false;
            }
            else {
                int n = static_cast<int>(sayi1);
                sonSonuc = static_cast<double>(faktoriyelHesapla(n));
                cout << "Sonuc: " << sonSonuc << endl;
            }
                    }
        else if (islem == "^") {
            if (sayi1 == 0 && sayi2 < 0) {
                cout << "Hata: Taban 0 iken us negatif olamaz!" << endl;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = pow(sayi1, sayi2);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }

        cout << "\nBaska bir islem yapmak istiyor musunuz? (E/H): ";
        cin >> devamMi;

        if (devamMi == 'E' || devamMi == 'e') {
            char secim;
            cout << "Bulunan sonuc (" << sonSonuc << ") ile devam etmek istiyor musunuz? (E/H): ";
            cin >> secim;

            sonuclaDevam = (secim == 'E' || secim == 'e');
        }

        cout << "------------------------------------" << endl;

    } while (devamMi == 'E' || devamMi == 'e');

    cout << "Program sonlandirildi. Iyi gunler!" << endl;

    return 0;
}
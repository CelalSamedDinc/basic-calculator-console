#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

long long faktoriyelHesapla(long long n) {
    long long carpim = 1;
    for (long long i = 1; i <= n; ++i) {
        carpim *= i;
    }
    return carpim;
}

int main() {
    double sayi1 = 0;
    double sayi2 = 0;
    double sonSonuc = 0;
    string islem = "";
    char devam = 'H';
    bool sonuclaDevam = false;

    vector<string> gecmis;

    do {
        bool hata = false;

        if (sonuclaDevam) {
            sayi1 = sonSonuc;
            cout << "Birinci sayi (onceki sonuc): " << sayi1 << endl;
        }
        else {
            cout << "Birinci sayiyi giriniz: ";
            cin >> sayi1;
        }

        cout << "Islemi secin (+, -, *, /, %, mod, !, ^, sqrt, log): ";
        cin >> islem;

        while (islem != "+" && islem != "-" && islem != "*" && islem != "/" &&
            islem != "%" && islem != "mod" && islem != "!" && islem != "^" &&
            islem != "sqrt" && islem != "log") {
            cout << "Gecersiz islem! Tekrar giriniz (+, -, *, /, %, mod, !, ^, sqrt, log): ";
            cin >> islem;
        }

        if (islem != "!" && islem != "sqrt") {
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
                hata = true;
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
                hata = true;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = fmod(sayi1, sayi2);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "!") {
            if (sayi1 < 0) {
                cout << "Hata: Negatif sayilarin faktoriyeli tanimsizdir!" << endl;
                hata = true;
                sonuclaDevam = false;
            }
            else if (sayi1 > 20) {
                cout << "Hata: 20'den buyuk sayilar icin faktoriyel hesaplanamaz (bellek tasmasi)!" << endl;
                hata = true;
                sonuclaDevam = false;
            }
            else {
                long long n = static_cast<long long>(sayi1);
                sonSonuc = static_cast<double>(faktoriyelHesapla(n));
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "^") {
            if (sayi1 == 0 && sayi2 < 0) {
                cout << "Hata: Taban 0 iken us negatif olamaz!" << endl;
                hata = true;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = pow(sayi1, sayi2);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "sqrt") {
            if (sayi1 < 0) {
                cout << "Hata: Negatif sayilarin karekokleri tanimsizdir!" << endl;
                hata = true;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = sqrt(sayi1);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        else if (islem == "log") {
            if (sayi1 <= 0 || sayi1 == 1 || sayi2 <= 0) {
                cout << "Hata: Taban pozitif ve 1'den farkli, ic kisim ise pozitif olmalidir!" << endl;
                hata = true;
                sonuclaDevam = false;
            }
            else {
                sonSonuc = log(sayi2) / log(sayi1);
                cout << "Sonuc: " << sonSonuc << endl;
            }
        }
        if (!hata) {
            stringstream ss;

            if (islem == "!") {
                ss << sayi1 << "! = " << sonSonuc;
            }
            else if (islem == "sqrt") {
                ss << "sqrt(" << sayi1 << ") = " << sonSonuc;
            }
            else if (islem == "log") {
                ss << "log_" << sayi1 << "(" << sayi2 << ") = " << sonSonuc;
            }
            else {
                ss << sayi1 << " " << islem << " " << sayi2 << " = " << sonSonuc;
            }

            gecmis.push_back(ss.str()); 
        }
        char gecmisSecim;
        cout << "\nIslem gecmisini goruntulemek istiyor musunuz? (E/H): ";
        cin >> gecmisSecim;

        if (gecmisSecim == 'E' || gecmisSecim == 'e') {
            cout << "\n--- ISLEM GECMISI ---" << endl;
            if (gecmis.empty()) {
                cout << "Henuz kayitli islem bulunmuyor." << endl;
            }
            else {
                for (size_t i = 0; i < gecmis.size(); ++i) {
                    cout << (i + 1) << ". " << gecmis[i] << endl;
                }
            }
            cout << "---------------------\n" << endl;
        }

        cout << "\nBaska bir islem yapmak istiyor musunuz? (E/H): ";
        cin >> devam;

        if (devam == 'E' || devam == 'e') {
            if (!hata) {
                char ansSecim;
                cout << "Bulunan sonuc (" << sonSonuc << ") ile devam etmek istiyor musunuz? (E/H): ";
                cin >> ansSecim;
                sonuclaDevam = (ansSecim == 'E' || ansSecim == 'e');
            }
            else {
                sonuclaDevam = false;
            }
            cout << "------------------------------------" << endl;
        }

    } while (devam == 'E' || devam == 'e');

    cout << "------------------------------------" << endl;
    cout << "Program sonlandirildi. Iyi gunler!" << endl;

    return 0;
}
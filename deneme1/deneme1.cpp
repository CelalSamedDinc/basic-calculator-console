#include <iostream>

using namespace std;

int main() {
	double sayi1, sayi2;
	char islem;
	char devam;

	do{
	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;

	cout << " Islemi secin (+, -, *, /): ";
	cin >> islem;

	while (islem != '+' && islem != '-' && islem != '*' && islem != '/') {
		cout << "Hatali islem girdiniz! Lutfen sadece +, -, *, / secin: ";
		cin >> islem;
	}

	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;

	if (islem == '+') {
		cout << "Sonuc: " << sayi1 + sayi2 << endl;
	}
	else if (islem == '-') {
		cout << "Sonuc: " << sayi1 - sayi2 << endl;
	}
	else if (islem == '*') {
		cout << "Sonuc: " << sayi1 * sayi2 << endl;
	}
	else if (islem == '/') {
		if (sayi2 == 0) {
			cout << "Hata: Bir sayi 0'a bolunemez!" << endl;
		}
		else {
			cout << "Sonuc: " << sayi1 / sayi2 << endl;
		}
	}
	cout << "\nBaska bir islem yapmak istiyor musunuz? (E/H): ";
	cin >> devam;
	cout << "------------------------------------\n";

	} while (devam == 'E' || devam == 'e');

	cout << "Program sonlandirildi. Iyi gunler!" << endl;
	return 0;
}
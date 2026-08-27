 #include <iostream>
using namespace std;

int main() {
    string isim;
    double vize, final, ortalama;

    cout << "Ogrencinin adi: ";
    cin >> isim;

    cout << "Vize notu: ";
    cin >> vize;

    cout << "Final notu: ";
    cin >> final;

    ortalama = vize * 0.4 + final * 0.6;

    cout << "\nOgrenci: " << isim << endl;
    cout << "Ortalama: " << ortalama << endl;

    if (ortalama >= 50)
        cout << "Durum: Gecti";
    else
        cout << "Durum: Kaldi";

    return 0;
}

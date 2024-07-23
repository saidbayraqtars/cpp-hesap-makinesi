#include <iostream>

int main() {

    std::cout << " HESAP MAKINESI " << std::endl;
    std::cout << "Toplama icin + kullaniniz" << std::endl;
    std::cout << "Cikarma icin - kullaniniz" << std::endl;
    std::cout << "Carpma icin * kullaniniz" << std::endl;
    std::cout << "Bolme icin / kullaniniz" << std::endl;
    std::cout << std::endl;

    double sayi1, sayi2, sonuc;
    char islem;

    std::cout << "Birinci sayiyi giriniz: ";
    std::cin >> sayi1;
    std::cout << std::endl;

    std::cout << "İşlemi giriniz: ";
    std::cin >> islem;
    std::cout << std::endl;

    std::cout << "İkinci sayıyı giriniz: ";
    std::cin >> sayi2;
    std::cout << std::endl;

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            std::cout << "Sonuç: " << sonuc << std::endl;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            std::cout << "Sonuç: " << sonuc << std::endl;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            std::cout << "Sonuç: " << sonuc << std::endl;
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                std::cout << "Bölmenin sonucu: " << sonuc << std::endl;
            } else {
                std::cout << "Hata! Sıfıra bölme hatası." << std::endl;
            }
            break;
        default:
            std::cout << "Geçersiz işlem! Lütfen +, -, * veya / operatörlerinden birini giriniz." << std::endl;
            break;
    }

    return 0;
}

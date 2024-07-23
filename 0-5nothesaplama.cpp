#include <iostream>
#include <locale> 
#include <string> 
using namespace std;

int main()
{
   setlocale(LC_ALL, "Turkish"); 
   string input;
   while (true) {
       cout << "Puanı Girin (Çıkmak için 'x' girin): ";
       cin >> input;

       if (input == "x") {
           break;
       }

       try {
           int puan = stoi(input);
           if (puan > 100) {
               cout << "Geçersiz.\n";
           } else if (puan >= 85) {
               cout << "5\n";
           } else if (puan >= 70) {
               cout << "4\n";
           } else if (puan >= 60) {
               cout << "3\n";
           } else if (puan >= 50) {
               cout << "2\n";
           } else if (puan >= 0) {
               cout << "1\n";
           } else {
               cout << "Geçersiz.\n";
           }
       } catch (invalid_argument& e) {
           cout << "Geçersiz giriş!\n";
       }
   }

   return 0;
}

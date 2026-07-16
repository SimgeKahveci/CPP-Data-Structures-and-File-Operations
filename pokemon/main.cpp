#include <iostream>
#include <time.h>
#include "pokemon.h"
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    // Rastgelelik (dodge) mekanizmasının her saniye farklı çalışması için seed tanımlıyoruz.
    // srand() fonksiyonunu burada 1 kez çağırmak en doğru yaklaşımdır.
    srand(time(0));

    cout << "=== POKEMON SAVAŞ ALANINA HOŞ GELDİNİZ ===" << endl;

    // İki farklı Pokemon oluşturuyoruz
    pokemon p1("Pikachu", ELECTRIC);
    pokemon p2("Gengar", GHOST);

    int round = 1;

    // İki Pokemon'un da canı 0'dan büyük olduğu sürece savaş devam eder
    while (p1.getHealth() > 0 && p2.getHealth() > 0) {
        cout << "\n================ ROUND " << round << " ================" << endl;
        cout << p1.getName() << " Canı: " << p1.getHealth() << " | " 
             << p2.getName() << " Canı: " << p2.getHealth() << endl;

        // Sırayla birbirlerine saldırıyorlar
        if (round % 2 != 0) {
            p1.attack(p2);
        } else {
            p2.attack(p1);
        }

        round++;
    }

    // Kazananı ilan etme paneli
    cout << "\n================ OYUN BİTTİ ================" << endl;
    if (p1.getHealth() <= 0 && p2.getHealth() <= 0) {
        cout << "Berabere! İki Pokemon da nakavt oldu." << endl;
    } else if (p1.getHealth() <= 0) {
        cout << "🏆 KAZANAN: " << p2.getName() << " (" << p2.getHealth() << " HP kaldı!)" << endl;
    } else {
        cout << "🏆 KAZANAN: " << p1.getName() << " (" << p1.getHealth() << " HP kaldı!)" << endl;
    }

    return 0;
}

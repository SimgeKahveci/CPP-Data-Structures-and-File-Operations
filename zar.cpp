#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void rollTwoDice();
int main(){
    srand(time(0));
    rollTwoDice();
    return 0;
}
void rollTwoDice(){
      //7x7lik uşturduk.böylece 1 ve 6 arasındaki indeksleri doğrudan zar sonuçları için kullanabilirizfrekans matrisi ol
    int frequencies[7][7]={0};
    // zarları 36.000 kez atacak döngü
    for(int i=0;i<36000;i++){
        int die1=1+rand()%6;
        int die2=1+rand()%6;
    //gelen kombinasyonun frekansını 1 arttırıyoruz
    frequencies[die1][die2]++;
    }
    cout<<"Die 1 outcome---Die 2 outcome---Frequency"<<endl;
    //tüm kombinasyonları ekrana yazdırmak için iç içe döngü
    for(int d1=1;d1<=6;d1++){
        for(int d2=1;d2<=6;d2++){
            cout<<setw(7)<<d1<<setw(17)<<d2<<setw(15)<<frequencies[d1][d2]<<endl;
        }
    }
}

  
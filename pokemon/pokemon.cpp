#include "pokemon.h"
#include <time.h>
#include <cstdlib>
pokemon :: pokemon (string Name,Type Type){
    name =Name;
    pokemonType=Type;
    health=10;
}
//pokemonun saldırıdan kaçınıp kaçınamayacağını rastgele belirler
bool pokemon::dodge(){
    srand(time(0));
    int rNumber=rand()%2;
    cout<<name<<"kaçma denemesi yaptı.Sonuç(1:kaçtı,0:kaçamadı):"<<rNumber<<endl;
     if(rNumber==1)
      return true;
     else 
      return false;
//eğer sayı 1 ise true (kaçtı) 0 ise false (kaçamadı)
}
void pokemon::decreaseHealth(){
    health -=1;
}
//düşman pokemon referans olarak alınıyot
void pokemon::attack(pokemon & enemy){
    cout<<"\n---"<<name<<","<<enemy.getName()<<"pokemonuna saldırıyor!---"<<endl;
    if(enemy.dodge()){
    //rakip kaçarsa (true)hamle yiyen (yani saldıran )pokemonun canı azalır
    cout<<enemy.getName()<<"başarıyla kaçtı!Hamleyi geri tepen"<<name<<"hasar alıyor"<<endl;
      decreaseHealth();
    }else{
    //kaçamazsa (false) rakibin canı azalır
    cout<<enemy.getName()<<"kaçamadı ve hasar aldı"<<endl;
     enemy.decreaseHealth();
    }
}
int pokemon::getHealth(){
    return health;
}
string pokemon::getName(){
    return name;

}

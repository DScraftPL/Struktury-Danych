#include <iostream>
#include <fstream>
#include "Kolejka/kolejka.h"

using namespace std;

int main(){
  ifstream plik;
  plik.open("znaki2.txt");
  kolejka queue;
  queue.first = nullptr;
  queue.last = nullptr;
  int n;
  char k;
  do {
    cout << "1 - sprawdz czy pusta\n2 - dodaj element z klawiatury\n3 - usun element i wyswietl\n4 - usun wszystko\n5 - wczytaj z pliku\n6 - wyswietl pierwszy element\n7 - wyswietl kolejke\n0 - wyjdz\n";
    cin >> n;
    switch (n) {
      case 1:{
        if(kolejka_empty(queue)){
          cout << "Kolejka jest pusta!\n";
        } else {
          cout << "Kolejka nie jest pusta!\n";
        }
        break;
      }
      case 2:{
        cin >> k;
        kolejka_push(queue, k);
        break;
      }
      case 3:{
        if(!kolejka_empty(queue)){
          k = kolejka_pop(queue);
          cout << "usunięto element: " << k << endl;
        } else {
          cout << "Kolejka jest pusta!\n";
        }
        break;
      }
      case 4:{
        while(!kolejka_empty(queue)){
          k = kolejka_pop(queue);
          cout << "usunięto element: " << k << endl;
        }
        break;
      }
      case 5:{
        while(!plik.eof()){
          plik >> k;
          if(k>='A' && k<='Z'){
            kolejka_push(queue, k);
          }
        }
        break;
      }
      case 6:{
        if(!kolejka_empty(queue)){
          cout << "element na poczatku: " << queue.first -> liczba << endl;
        } else {
          cout << "Kolejka jest pusta!\n";
        }
        break;
      }
      case 7:{
        if(!kolejka_empty(queue)){
          kolejka_wyswietl(queue);
        } else {
          cout << "Kolejka jest pusta!\n";
        }
        break;
      }
    }
  } while(n>0 && n<9);

  return 0;
}

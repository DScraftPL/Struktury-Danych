#include <iostream>
#include "kolejka.h"

using namespace std;

bool kolejka_empty(kolejka k){
  return k.first == nullptr;
}

void kolejka_push(kolejka &k, char liczba){
  element_kolejki *element = new element_kolejki;
  element->liczba = liczba;
  element->next = nullptr;
  if(k.last != nullptr){
    k.last->next = element;
  } else {
    k.first = element;
  }
  k.last = element;
}

char kolejka_pop(kolejka &k){
  element_kolejki *temp = k.first;
  k.first = k.first->next;
  int x = temp->liczba;
  delete temp;
  if(k.first == nullptr){
    k.last = nullptr;
  }
  return x;
}

void kolejka_wyswietl(kolejka &k){
  char x;
  kolejka temp;
  temp.first = nullptr;
  temp.last = nullptr;
  while(!kolejka_empty(k)){
    x = kolejka_pop(k);
    cout << x << " ";
    kolejka_push(temp, x);
  }
  cout << endl;
  k = temp;
}

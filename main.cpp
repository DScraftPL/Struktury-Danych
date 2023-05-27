#include <iostream>
#include <fstream>
#include "Kolejka/kolejka.h"
#include "Lista1Kier/lista1kier.h"

using namespace std;

int main(){
  Lista1Kier lista;
  int n, x, pos;
  do{
    cin >> n;
    switch (n) {
      case 1:{
        cin >> x;
        lista.addHead(x);
        break;
      }
      case 2:{
        cin >> x;
        lista.addTail(x);
        break;
      }
      case 3:{
        cin >> x >> pos;
        lista.addPos(x, pos);
        break;
      }
      case 4:{
        lista.deleteHead();
        break;
      }
      case 5:{
        lista.deleteTail();
        break;
      }
      case 6:{
        cin >> pos;
        lista.deletePos(pos);
      }
      case 7:{
        for(int i=0; i<lista.counter; i++){
          cout << lista[i] << " ";
        }
        cout << endl;
        break;
      }
      case 8:{
        cout << lista.srednia();
        break;
      }
      case 9:{
        cout << lista.maximum();
        break;
      }
    }
  } while(n>0);
  return 0;
}

#ifndef KOLEJKA
#define KOLEJKA

typedef struct element_kolejki{
  char liczba;
  element_kolejki* next;
} element_kolejki;

typedef struct kolejka{
  element_kolejki* first;
  element_kolejki* last;
} kolejka;

bool kolejka_empty(kolejka k);
void kolejka_push(kolejka &k, char liczba);
char kolejka_pop(kolejka &k);
void kolejka_wyswietl(kolejka &k);
#endif // !KOLEJKA


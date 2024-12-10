#include <stdio.h>

// Bebe�in ihtiya�lar�n� temsil eden bir struct
  int tokluk;
  int uyku;
  int sevgi;
  int sosyallesme;
  int saglik;
  int egitim;
  int hijyen;
  int tuvalet;
  int eglence;


// Bebe�in ihtiya�lar�n� iyile�tirmek i�in kullan�lan fonksiyonlar
void yemekYe(Bebek *bebek) {
  bebek->tokluk += 5;
}

void uyu(Bebek *bebek) {
  bebek->uyku += 5;
}

void sevgiGoster(Bebek *bebek) {
  bebek->sevgi += 5;
}

void sosyalles(Bebek *bebek) {
  bebek->sosyallesme += 5;
}

void saglikliYasin(Bebek *bebek) {
  bebek->saglik += 5;
}

void egit(Bebek *bebek) {
  bebek->egitim += 5;
}

void hijyenikOl(Bebek *bebek) {
  bebek->hijyen += 5;
}

void tuvaletiniYap(Bebek *bebek) {
  bebek->tuvalet += 5;
}

void eglen(Bebek *bebek) {
  bebek->eglence += 5;
}

// Ana fonksiyon
int main() {
  // Bebe�in ihtiya�lar�n� s�f�ra ayarla
  Bebek bebek = {0, 0, 0, 0, 0, 0, 0, 0, 0};

  // Bebe�in ihtiya�lar�n� iyile�tir
  int istek;
  do {
    printf("Bebe�inin hangi ihtiyac�n� iyile�tirmek istiyorsun?\n");
    printf("1. Tokluk\n2. Uyku\n3. Sevgi\n4. Sosyalle�me\n5. Sa�l�k\n6. E�itim\n7. Hijyen\n8. Tuvalet\n9. E�lence\n");
    scanf("%d", &istek);

    switch (istek) {
      case 1:
        yemekYe(&bebek);
        break;
      case 2:
        uyu(&bebek);
        break;
      case 3:
        sevgiGoster(&bebek);
        break;
      case 4:
        sosyalles(&bebek);
        break;
      case 5:
        saglikliYasin(&bebek);
        break;
      case 6:
        egit(&bebek);
        break;
      case 7:
        hijyenikOl(&bebek);
        break;
      case 8:
        tuvaletiniYap(&bebek);
        break;
      case 9:
        eglen(&bebek);
        break;
      default:
        printf("Ge�ersiz istek.\n");
        break;
    }
  } while (istek != 0);

  // Bebe�in ihtiya�lar�n� yazd�r
  printf("Bebe�inin ihtiya�lar�:\n");
  printf("Tokluk: %d\n", bebek.tokluk);
  printf("Uyku: %d\n", bebek.uyku);
  printf("Sevgi: %d\n", bebek.sevgi);
  printf("Sosyalle�me: %d\n", bebek.sosyallesme);
  printf("Sa�l�k: %d\n", bebek.saglik);
  printf("E�itim: %d\n", bebek.egitim);
  printf("Hijyen: %d\n", bebek.hijyen);
  printf("Tuvalet: %d\n", bebek.tuvalet);
  printf("E�lence: %d\n", bebek.eglence);

  return 0;
}

#include <stdio.h>

// Bebeðin ihtiyaçlarýný temsil eden bir struct
  int tokluk;
  int uyku;
  int sevgi;
  int sosyallesme;
  int saglik;
  int egitim;
  int hijyen;
  int tuvalet;
  int eglence;


// Bebeðin ihtiyaçlarýný iyileþtirmek için kullanýlan fonksiyonlar
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
  // Bebeðin ihtiyaçlarýný sýfýra ayarla
  Bebek bebek = {0, 0, 0, 0, 0, 0, 0, 0, 0};

  // Bebeðin ihtiyaçlarýný iyileþtir
  int istek;
  do {
    printf("Bebeðinin hangi ihtiyacýný iyileþtirmek istiyorsun?\n");
    printf("1. Tokluk\n2. Uyku\n3. Sevgi\n4. Sosyalleþme\n5. Saðlýk\n6. Eðitim\n7. Hijyen\n8. Tuvalet\n9. Eðlence\n");
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
        printf("Geçersiz istek.\n");
        break;
    }
  } while (istek != 0);

  // Bebeðin ihtiyaçlarýný yazdýr
  printf("Bebeðinin ihtiyaçlarý:\n");
  printf("Tokluk: %d\n", bebek.tokluk);
  printf("Uyku: %d\n", bebek.uyku);
  printf("Sevgi: %d\n", bebek.sevgi);
  printf("Sosyalleþme: %d\n", bebek.sosyallesme);
  printf("Saðlýk: %d\n", bebek.saglik);
  printf("Eðitim: %d\n", bebek.egitim);
  printf("Hijyen: %d\n", bebek.hijyen);
  printf("Tuvalet: %d\n", bebek.tuvalet);
  printf("Eðlence: %d\n", bebek.eglence);

  return 0;
}

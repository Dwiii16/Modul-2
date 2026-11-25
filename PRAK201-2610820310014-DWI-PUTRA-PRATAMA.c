
#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    char nim[30];
    char kelas[30];
    char ttl[100];
    char alamat[150];
    char hobby[100];
    char no_hp[30];

    printf("INPUT BIODATA\n");

    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';

    printf("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);
    nim[strcspn(nim, "\n")] = '\0';

    printf("Kelas Paralel        : ");
    fgets(kelas, sizeof(kelas), stdin);
    kelas[strcspn(kelas, "\n")] = '\0';

    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);
    ttl[strcspn(ttl, "\n")] = '\0';

    printf("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = '\0';

    printf("Hobby                : ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("No. HP               : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    no_hp[strcspn(no_hp, "\n")] = '\0';

    printf("\nOUTPUT BIODATA\n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", no_hp);

    return 0;
}
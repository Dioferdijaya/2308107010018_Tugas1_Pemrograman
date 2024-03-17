#include <stdio.h>

int main() {
    int bilangan;
    long int bilanganDesimal, bilanganBiner, bilanganOctal;
    
    printf("Pilihlah yang anda ingin konversi:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    
    printf("Masukkan pilihan Anda antara (1-4): ");
    scanf("%d", &bilangan);

    switch(bilangan) {
        case 1:
            printf("Mohon masukkan bilangan Desimal: ");
            scanf("%ld", &bilanganDesimal);
            
            printf("Hasil konversi dari bilangan tersebut adalah: ");
            while(bilanganDesimal > 0) {
                printf("%ld", bilanganDesimal % 2);
                bilanganDesimal /= 2;
            }
            break;
            
        case 2:
            printf("Mohon masukkan bilangan Biner: ");
            scanf("%ld", &bilanganBiner);
            
            long int hasilDesimal = 0, pangkat = 1;
            while(bilanganBiner > 0) {
                hasilDesimal += (bilanganBiner % 10) * (pangkat);
                bilanganBiner /= 10;
                pangkat=pangkat*2;
            }
            
            printf("Hasil konversi tersebut adalah: %ld", hasilDesimal);
            break;

        case 3:
            printf("Mohon masukkan bilangan Desimal: ");
            scanf("%ld", &bilanganDesimal);

            printf("Hasil konversi tersebut adalah: ");
            while(bilanganDesimal > 0) {
                printf("%ld", bilanganDesimal % 8);
                bilanganDesimal /= 8;
            }
            break;

        case 4:
            printf("Mohon masukkan bilangan Octal: ");
            scanf("%lo", &bilanganOctal);

            long int hasilDesimalOctal = 0, pangkatOctal = 1;
            while(bilanganOctal > 0) {
                hasilDesimalOctal += (bilanganOctal % 8) * (pangkatOctal);
                bilanganOctal /= 8;
                pangkatOctal=pangkatOctal*8;
            }

            printf("Hasil konversi tersebut adalah: %ld", hasilDesimalOctal);
            break;

        default:
            printf("Mohon masukan pilihan yang sesuai.\n");
    }

    return 0;
}


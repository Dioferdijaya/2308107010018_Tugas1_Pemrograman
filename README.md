Tugas nomor 1
#include <stdio.h>: Mendeklarasikan header file standar untuk input-output dalam bahasa C.

int main(): Fungsi utama dari program C. Eksekusi program dimulai dari sini.

Deklarasi variabel:

int bilangan: Digunakan untuk menyimpan pilihan pengguna untuk jenis konversi yang ingin dilakukan.
long int bilanganDesimal, bilanganBiner, bilanganOctal: Digunakan untuk menyimpan nilai bilangan yang akan dikonversi.
Menampilkan menu pilihan kepada pengguna untuk jenis konversi yang ingin dilakukan.

Membaca input pilihan pengguna dengan menggunakan scanf("%d", &bilangan).

Menggunakan struktur switch-case untuk melakukan konversi sesuai dengan pilihan pengguna.

Case 1: Konversi bilangan desimal ke biner.

Meminta pengguna untuk memasukkan bilangan desimal.
Melakukan konversi bilangan desimal ke biner dengan menggunakan operasi modulo dan pembagian.
Mengeluarkan hasil konversi biner.
Case 2: Konversi bilangan biner ke desimal.

Meminta pengguna untuk memasukkan bilangan biner.
Melakukan konversi bilangan biner ke desimal dengan menggunakan operasi modulo dan pembagian.
Mengeluarkan hasil konversi desimal.
Case 3: Konversi bilangan desimal ke oktal.

Meminta pengguna untuk memasukkan bilangan desimal.
Melakukan konversi bilangan desimal ke oktal dengan menggunakan operasi modulo dan pembagian.
Mengeluarkan hasil konversi oktal.
Case 4: Konversi bilangan oktal ke desimal.

Meminta pengguna untuk memasukkan bilangan oktal.
Melakukan konversi bilangan oktal ke desimal dengan menggunakan operasi modulo dan pembagian.
Mengeluarkan hasil konversi desimal.
Default case: Memberikan pesan kesalahan jika pilihan pengguna tidak valid.

return 0;: Mengembalikan nilai 0, menandakan bahwa program telah dijalankan dengan sukses.

Tugas nomor 2
#include <stdio.h>: Mendefinisikan header file standar untuk input-output dalam bahasa C, yang berisi fungsi-fungsi seperti printf() dan scanf().
int main(): Ini adalah fungsi utama dari program C. Eksekusi program dimulai dari sini.
int tahun;: Mendeklarasikan variabel 'tahun' sebagai tipe data integer yang akan digunakan untuk menyimpan tahun yang dimasukkan oleh pengguna.

while (1) {: Loop tak terbatas yang berjalan selama kondisi (1) benar (selalu benar). Ini akan memungkinkan program untuk terus meminta input pengguna hingga input yang valid diberikan.
printf("Masukkan tahun (hanya 4 angka): ");: Mencetak pesan ke layar untuk meminta pengguna memasukkan tahun.
if (scanf("%d", &tahun) != 1 || tahun < 1000 || tahun > 9999) {: Menggunakan scanf() untuk mengambil input dari pengguna. Jika input yang diberikan bukan berupa integer atau tahun yang dimasukkan kurang dari 1000 atau lebih dari 9999, maka program akan mencetak pesan kesalahan.

while (getchar() != '\n');: Membersihkan input buffer jika input yang dimasukkan oleh pengguna tidak valid.
printf("Input tidak valid Harap masukkan tahun yang valid.\n");: Pesan kesalahan yang akan dicetak jika input yang dimasukkan tidak valid.
else { break; }: Jika input yang dimasukkan valid (berupa tahun dengan 4 digit), program akan keluar dari loop while.

if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {: Memeriksa apakah tahun yang dimasukkan adalah tahun kabisat atau bukan, sesuai dengan aturan kalender Gregorian. Jika tahun habis dibagi 4 tetapi tidak habis dibagi 100, atau habis dibagi 400, itu adalah tahun kabisat.
printf("%d adalah tahun kabisat.\n", tahun);: Jika tahun adalah tahun kabisat, pesan ini akan dicetak.
printf("%d bukan tahun kabisat.\n", tahun);: Jika tahun bukan tahun kabisat, pesan ini akan dicetak.

return 0;: Mengembalikan nilai 0, menandakan bahwa program selesai dijalankan tanpa masalah.

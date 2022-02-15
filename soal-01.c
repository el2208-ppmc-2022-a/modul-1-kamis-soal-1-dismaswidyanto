/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : Overview of C Language
*Percobaan        : -
*Hari dan Tanggal : Kamis, 17 Februari 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0, i = 1, temp, temp2, n, menu, harga, lama, harga2, lama2;

    printf("Masukan banyaknya data = ");
    scanf("%d", &n);

    printf("Silahkan mulai pengisian data: \n");
    printf("Masukan data ke-%d (harga, lama perjalanan) = ", i);
    scanf("%d, %d", &harga, &lama);
    harga2 = harga;
    lama2 = lama;

    for (i = 2; i <= n; i++)
    {
        printf("Masukan data ke-%d (harga, lama perjalanan) = ", i);
        scanf("%d, %d", &temp, &temp2);
        // Harga termurah
        if (temp <= harga)
        {
            if (temp < harga)
            {
                harga = temp;
                lama = temp2;
            }
            else
            {
                if (temp2 < lama)
                {
                    harga = temp;
                    lama = temp2;
                }
            }
        }
        // Perjalanan tersingkat
        if (temp2 <= lama2)
        {
            if (temp2 < lama2)
            {
                harga2 = temp;
                lama2 = temp2;
            }
            else
            {
                if (temp < harga)
                {
                    harga2 = temp;
                    lama2 = temp2;
                }
            }
        }
        // Cara lain, bisa dilakukan analisis dengan logical statement, seperti or dan and, untuk mempersingkat analisis kondisi
    }

    printf("Pilihan menu\n1. Harga termurah\n2. Perjalanan tersingkat\n3. Tampilkan keduanya\nPilih menu? (1/2/3) = ");
    scanf("%d", &menu);

    if (menu == 1)
    {
        printf("Berikut adalah detail pilihan harga termurah yang disarankan:\n");
        printf("Harga = Rp %d\n", harga);
        printf("Lama perjalanan = %d Jam\n", lama);
    }
    else if (menu == 2)
    {
        printf("Berikut adalah detail pilihan perjalanan tersingkat yang disarankan:\n");
        printf("Harga = Rp %d\n", harga2);
        printf("Lama perjalanan = %d Jam\n", lama2);
    }
    else
    {
        printf("Berikut adalah detail pilihan yang disarankan:\n");
        printf("Harga termurah:\n");
        printf("Harga = Rp %d\n", harga);
        printf("Lama perjalanan = %d Jam\n", lama);
        printf("Perjalanan tersingkat:\n");
        printf("Harga = Rp %d\n", harga2);
        printf("Lama perjalanan = %d Jam\n", lama2);
    }
    return 0;
}

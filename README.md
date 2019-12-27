# LoopingKhususArray__CPP
Bahan Ajar Fundamental Pemrograman C++. Penggunaan Looping (Perulangan) Khusus Untuk Array. Dan Perbandingan Antara Looping Biasa dan Looping Untuk Array.<br><br>
<img src="https://github.com/RizkyKhapidsyah/LoopingKhususArray__CPP/blob/master/Results/001.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/LoopingKhususArray__CPP/blob/master/Results/002.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/LoopingKhususArray__CPP/blob/master/Results/003.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/LoopingKhususArray__CPP/blob/master/Results/004.PNG"><br><br>
- Lihat <a href="https://github.com/RizkyKhapidsyah/LoopingKhususArray__CPP/blob/master/Source.cpp">Source Code.</a><br><br>



# Tutorial Array di C++

Apa yang akan kamu lakukan jika diminta untuk menyimpan banyak data di program?
Misalkan kita ingin menyimpan nama-nama teman untuk data kontak.
Mungkin saja, kita akan menyimpannya seperti ini:

      string namaKontak1 = "Ayu";
      string namaKontak2 = "Bunga";
      string namaKontak3 = "Cyntia";
      string namaKontak4 = "Deni";
      string namaKontak5 = "Elisa";

Hal ini boleh-boleh saja..
Akan tetapi, masalahnya:

“Gimana nanti kalau ada banyak sekali data, pasti capek bikin variabel terus?”
Karena itu, kita membutuhkan Array.
Apa itu Array, dan bagaimana cara menggunakannya?
Mari kita bahas…


# Apa itu Array?

Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat.
Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya.
Indeks array selalu dimulai dari angka nol (0).

Pada teori struktur data.
Ukuran array akan bergantung dari banyaknya data yang disimpan di dalamnya.

# Cara Membuat Array pada C++

Pada C++, array dapat kita buat dengan cara seperti ini.

      // membuat array kosong dengan tipe data integer dan panjang 10
      int nama_array[10];

      // membuat array dengan langsung diisi
      int nama_arr[3] = {0, 3, 2}

Cara membaut array hampir sama seperti cara membuat variabel biasa.
Bedanya… pada array kita harus menentukan panjangnya.

# Cara Mengambil Data dari Array

Seperti yang sudah kita ketahui Array akan menyimpan sekumpulan data dan memberinya nomer indeks agar mudah diakses. Indeks array selalu dimauli dari nol 0. Misalkan kita punya array seperti ini:

      char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

Bagaimana cara mengambil huruf c?
Jawabannya:

      huruf[2];

Mengapa bukan huruf[3]?
### Ingat: indeks array selalu dimulai dari nol.

Biar lebih jelas, mari kita coba dalam program. Silahkan buat file baru dengan nama contoh_array.cpp, kemudian isi dengan kode berikut:

      #include <iostream>
      using namespace std;

      int main(){
          char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

          // mengambil data pada array
          cout << "Huruf: " << huruf[2] << endl;

          return 0;
      }

Setelah itu, coba compile dan jalankan.

# Mengisi Ulang Data pada Array

Data pada array dapat kita isi ulang dengan cara seperti ini:

      huruf[2] = 'z';

Maka isi array huruf pada indeks ke-2 akan bernilai 'z'.
Kalau tidak percaya…
Kamu bisa coba buktikan sendiri.
Silahkan ubah kode pada contoh_array.cpp menjadi seperti ini:

      #include <iostream>
      using namespace std;

      int main(){
          // isi awal array
          char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

          // mengubah isi data array
          huruf[2] = 'z';

          // mencetak isi array
          cout << "Huruf: " << huruf[2] << endl;

          return 0;
      }

Contoh lain: array_data.cpp

      #include <iostream>
      using namespace std;

      int main(){
          // membuat array kosong
          int nilai[5];

          // mengisi array
          nilai[0] = 32;
          nilai[1] = 42;
          nilai[2] = 76;
          nilai[3] = 31;
          nilai[4] = 57;

          // mencetak isi array
          cout << "Nilai ke-1: " << nilai[0] << endl;
          cout << "Nilai ke-2: " << nilai[1] << endl;
          cout << "Nilai ke-3: " << nilai[2] << endl;
          cout << "Nilai ke-4: " << nilai[3] << endl;
          cout << "Nilai ke-5: " << nilai[4] << endl;

          return 0;
      }

# Menggunakan Perulangan dan Array

Pada contoh di atas, kita menggunakan perintah cout secara berulang untuk mencetak semua isi array.

      cout << "Nilai ke-1: " << nilai[0] << endl;
      cout << "Nilai ke-2: " << nilai[1] << endl;
      cout << "Nilai ke-3: " << nilai[2] << endl;
      cout << "Nilai ke-4: " << nilai[3] << endl;
      cout << "Nilai ke-5: " << nilai[4] << endl;

Kalau isi array-nya ada ribuan, apa kamu akan sanggup menulis ini berulang-ulang? Tentu saja tidak! Karena itu, kita bisa memanfaatkan perulangan untuk mencetaknya.

Contoh: array_loop.cpp

      #include <iostream>
      using namespace std;

      int main(){
          // membuat array kosong
          int nilai[5];

          // mengisi array
          nilai[0] = 32;
          nilai[1] = 42;
          nilai[2] = 76;
          nilai[3] = 31;
          nilai[4] = 57;

          // mencetak isi array dengan perulangan
          for(int i; i < 5; i++){
              printf("Nilai ke-%d: %d\n", i, nilai[i]);
          }

          return 0;
      }

Jauh lebih sederhana ‘kan… Tapi ada yang masih kurang. Pada perulangan di atas kita memberikan batas maksimal secara manual, yaitu: i < 5. Nilai 5 seharusnya diganti dengan ukuran atau jumlah isi array. Sehingga akan menjadi seperti ini:

      int length = sizeof(nilai) / sizeof(*nilai);
      for (int i = 0; i < length; i++){
          printf("Nilai ke-1: %d\n", nilai[i]);
      }

Ada dua cara untuk mendapatkan panjang array:

- Partama cara seperti di atas (seperti bahasa C); 
- Menggunakan Class array dari C++.

Kita bahas dulu cara yang pertama..
Pada contoh di atas, kita menggunakan fungsi sizeof() untuk mengambil panajang atau ukuran array.

      Fungsi sizeof() <br> 

Yang sebenarnya akan mengambil ukuran memori dari array.
Misalkan saya punya array seperti ini:

      int nilai[2] = {1, 2};

Isi array-nya berupa integer, tipe data integer memiliki ukuran 4 byte dalam memori. Maka ukuran array tersebut adalah 8 byte.
Lalu bagaimana cara mendapatkan banyaknya isi array?
Karena di bahasa C belum memiliki fungsi khusus untuk mengambil banyaknya isi array.
Kita harus membaginya dengan panjang pointernya.

Contoh:

      int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

      /* ukuran array dalam byte */
      int size = sizeof(array);

      /* banyaknya isi array `array` */
      int length = sizeof(array) / sizeof(*array);

Mari kita coba…
Buatlah program dengan nama panjang_array.cpp, kemudian isi dengan kode berikut:

      #include <stdio.h>

      void main(){
          // membuat array
          string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

          //  mengambil banyaknya isi array
          int length = sizeof(contact) / sizeof(*contact);

          printf("Banyaknya isi array nilai: %d\n", length);
      }

Cara kedua, kita bisa gunakan Class Template dari C++. Class Template ini mulai ditambahkan pada C++ 11.

Contoh:

      array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"}; // membuat array dengan class
      cout << names.size(); // mengambil ukuran array

Tapi sebelum kita dapat menggunakan Class Template array<>, kita harus mengimpornya dengan #include.

Contoh lengkap: array_class.cpp

      #include <iostream>
      #include <array>
      using namespace std;

      int main(){
          array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"};

          printf("Ada %d data di dalam array: \n", names.size());

          for(int i = 0; i < names.size(); i++){
              cout << i << ". " << names[i] << endl;
          }

          return 0;
      }

Bisa dibilang, Class Template array ini adalah pengembangan dari cara yang sebelumnya.<br><br>

Referensi Artikel: <a href="https://www.petanikode.com">PetaniKode</a><br> 
Referensi Source Code: <a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a><br>

-----
All Source Code is Modified.

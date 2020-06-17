# Smart Remote Control (RC) Car

Proyek Akhir Praktikum Sistem Berbasis Komputer oleh Kelompok 8B (SBK-02)
  1. Ivan Widjanarko               (1806148706)
  2. Martin Hizkia Parasi          (1806148750)
  3. Mas Rafi Fauzan Ontowiryo     (1806200040)
  4. Muhammad Miftah Faridh        (1806148782)

## Latar Belakang

<p align="justify">       Saat ini, ilmu pengetahuan dan teknologi (iptek) sudah mengalami perkembangan yang cukup pesat. Hal ini ditandai dengan berbagai inovasi yang muncul dan diperkenalkan ke publik, baik inovasi yang sederhana maupun inovasi yang sangat canggih hingga menggemparkan dunia. Teknologi sendiri sebenarnya sudah ada sejak zaman Romawi Kuno dan terus berkembang secara drastis hingga saat ini. Tidak hanya mengalami perkembangan, teknologi juga ternyata mengalami revolusi sehingga teknologi-teknologi  yang ada sekarang menjadi semakin canggih. Salah satu contohnya adalah penggunaan internet hari-hari ini. Melalui internet, berbagai informasi dan pengetahuan dapat dengan mudahnya diakses oleh siapapun, kapanpun, dan di manapun. Tidak hanya internet, industri otomotif pun juga merasakan dampak dari perkembangan iptek ini. Salah satu contohnya adalah smart car. </p>
<p align="justify">       Smart car merupakan salah satu perkembangan iptek di bidang otomotif. Smart car ini biasanya dilengkapi dengan fitur-fitur yang memukau, seperti sistem kendali otomatis / tanpa supir (autopilot), menggunakan listrik sebagai sumber tenaga utamanya, tampilan informasi-informasi real time mengenai kondisi mobil saat itu, dan fitur-fitur lainnya. Teknologi-teknologi modern yang ada pada smart car akan membantu manusia dalam melakukan pekerjaannya sehari-hari serta dapat menyediakan kenyamanan yang lebih. Kenyamanan ini tidak hanya bagi pengendara maupun penumpang, tetapi juga bagi orang-orang yang ada di sekitarnya. </p> 
<p align="justify">       Proyek akhir dari mata kuliah Praktikum Sistem Berbasis Komputer mengusung topik tentang Kesehatan / Smart City. Berdasarkan topik dan fenomena perkembangan teknologi yang ada, smart car menjadi ide dasar dari proyek kelompok kami. Kami akan berusaha mengimplemntasikan fitur-fitur tampilan informasi mengenai kondisi mobil. Informasi tersebut seperti mendeteksi suhu mesin mobil, jarak dengan objek atau mobil lain, keadaan lingkungan (siang / malam), kebocoran gas, serta perubahan kemiringan mobil. Informasi-informasi tersebut akan ditampilkan pada sebuah LCD yang berukuran 16x2. Tidak hanya itu, mobil juga dapat digerakan dengan menggunakan remote control dan diperlukannya password untuk memulai penggunaan smart car ini. </p>

## Deskripsi Proyek

<p align="justify">       Dalam proyek akhir ini, kami berusaha menerapkan atau mengimplementasikan mikrokontroler untuk sebuah fungsi atau sistem tertentu menggunakan Bahasa C dengan topik Smart City. Proyek yang dirancang memiliki kompleksitas yang baik dan menarik untuk digunakan. Dalam proyek akhir ini, kami berusaha untuk menerapkan beberapa topik kuliah terkait, seperti Pemrograman Mikrokontroler dengan Bahasa Pemrograman C, Serial Communication (I2C), serta Sensor dan Aktuator. </p>
<p align="justify">       Kelompok kami akhirnya memutuskan untuk mebuat sebuah sistem embedded berupa Smart Remote Control Car. Sistem embedded yang kami rancang ini merupakan sebuah rangkaian yang dapat mengendalikan gerak DC Motor. Selain itu, terdapat juga fitur tambahan yang mampu mendeteksi suhu, jarak dengan objek atau mobil lain, keadaan lingkungan (siang / malam), kebocoran gas, serta perubahan kemiringan mobil. Fitur-fitur tersebut menggunakan beberapa sensor, seperti IR Sensor dan Remote untuk menggerakkan DC Motor, Temperature Sensor untuk mengukur suhu mesin mobil, Ultrasonic Sensor untuk mendeteksi kendaraan lain yang ada di sekitar mobil, Photoresistor / LDR (Light Dependent Resistor) untuk mendeteksi keadaan lingkungan apakah siang atau malam, Gas Sensor untuk mendeteksi kebocoran gas pada mobil, serta Tilt Sensor untuk mendeteksi perubahan kemiringan mobil. </p>
<p align="justify">       Informasi-informasi tersebut akan ditampilkan pada 16x2 LCD (Liquid Crystal Display). Jika ada nilai-nilai yang melebihi batas wajar yang ditentukan, maka akan ada lampu LED (Light-Emitting Diode) yang menyala. Diperlukan juga password untuk memulai Smart Car ini. Password tersebut akan diinput dengan menggunakan Numeric Keypad 4x4. Ketika user salah memasukkan password, maka akan ada lampu LED yang menyala juga memberikan peringatan. </p>
<p align="justify">       Sistem embedded ini nantinya akan disimulasikan melalui Tinkercad, walaupun pada awalnya diharuskan membuat rangkaian secara nyata dengan menggunakan Arduino dan perangkat-perangkat lainnya. Namun, dikarenakan adanya pandemi COVID-19 serta PSBB (Pembatasan Sosial Berskala Besar), physical distancing, dan self isolation harus diterapkan demi memutus mata rantai penyebaran virus ini, maka kami sekelompok tidak dapat berjumpa satu sama lain. Tinkercad menjadi salah satu opsi / pilihan agar tetap bisa mensimulasikan proyek akhir ini. </p>

## Flowchart

![alt text](https://github.com/IvanWidjanarko/Smart-Remote-Control-RC-Car/blob/master/Smart%20Car%20Flowchart%20(1).jpg)

![alt text](https://github.com/IvanWidjanarko/Smart-Remote-Control-RC-Car/blob/master/Smart%20Car%20Flowchart%20(2).jpg)

![alt text](https://github.com/IvanWidjanarko/Smart-Remote-Control-RC-Car/blob/master/Smart%20Car%20Flowchart%20(3).jpg)

## Hasil Uji Coba / Simulasi

### Password Salah
![alt text]()

### Password Benar
![alt text]()

### Motor DC (IR Sensor & Remote)
![alt text]()

### Photoresistor
![alt text]()

### Temperature Sensor
![alt text]()

### Ultrasonic Sensor
![alt text]()

### Gas Sensor
![alt text]()

### Tilt Sensor
![alt text]()

## Skematik Rangkaian

![alt text](https://github.com/IvanWidjanarko/Smart-Remote-Control-RC-Car/blob/master/Smart%20Car%20Schematic.jpg)

<p align="justify">       Cara kerja program ini adalah sebagai berikut. Pertama, LCD akan menampilkan tulisan ‘Smart Car Kelompok 8B’ kemudian ‘Insert Password’. Setelah itu, user harus memasukkan password, yaitu 8888 dengan menggunakan Keypad 4x4. Jika password salah, maka LCD akan menampilkan tulisan ‘Password Invalid’ dan LED merah akan menyala. Jumlah kesempatan (n) dikurangi satu dan jumlah percobaan (t) ditambah satu setiap terjadi kesalahan input password. LCD akan menampilkan tulisan ‘Opportunity Left n Times’. Jika n = 0 dan t = 3, maka input password telah mencapai batas maksimum. LCD akan menampilkan tulisan ‘ALARM ACTIVATED’ dan ‘ALERT INTRUDER’. Jika password yang dimasukkan benar, maka LCD akan menampilkan tulisan ‘Password Valid’ dan LED hijau menyala. </p>
<p align="justify">       Lalu, user akan bisa menggunakan remote dan fitur-fitur lainnya. Kondisi awal motor adalah berhenti, yaitu motor kanan 0 RPM dan motor kiri 0 RPM. Jika tombol remote ditekan, maka akan ada respon yang muncul. Jika tombol 2 ditekan, maka motor akan bergerak, yaitu motor kanan 9393 RPM dan motor kiri 9393 RPM. Jika tombol 4 ditekan, maka motor akan bergerak, yaitu motor kanan 9393 RPM dan motor kiri -9393 RPM. Jika tombol 5 ditekan, maka motor akan bergerak, yaitu motor kanan 0 RPM dan motor kiri 0 RPM, selain itu LED merah akan menyala. Jika tombol 6 ditekan, maka motor akan bergerak, yaitu motor kanan -9393 RPM dan motor kiri 9393 RPM. Jika tombol 8 ditekan, maka motor akan bergerak, yaitu motor kanan -9393 RPM dan motor kiri -9393 RPM. </p>
<p align="justify">       Jika intensitas cahaya mengalami perubahan, maka akan ada respon yang muncul juga. Jika nilai LDR <800, maka LED jingga mati. Jika nilai LDR >=800, maka LED jingga menyala. Jika suhu mesin mobil berubah, maka akan ada respon yang muncul juga. Jika Suhu (m) < 40, maka LCD akan menampilkan ‘Suhu : m Celcius’ dan LED biru, kuning, dan abu-abu mati. Jika 40 <= Suhu (m) < 50, maka LCD akan menampilkan ‘Suhu : m Celcius’ dan LED biru menyala serta LED kuning dan abu-abu mati. Jika 50 <= Suhu (m) < 60, maka LCD akan menampilkan ‘Suhu : m Celcius’ dan LED biru dan kuning menyala serta LED abu-abu mati. Jika Suhu (m) >= 60, maka LCD akan menampilkan ‘Suhu : m Celcius’ dan LED biru, kuning, dan abu-abu menyala. Nilai LDR tersebut akan dikirim dengan komunikasi serial, yaitu I2C dari Arduino 1 (Arduino dengan Temperature Sensor / Slave) ke Arduino 2 (Arduino dengan LCD / Master). </p>
<p align="justify">       Jika jarak objek di sekitar berubah, maka akan ada respon yang muncul juga. Jika jarak > 199, maka LCD akan menampilkan ‘Jarak Objek : cm‘ dan LED akan menyala. Jika jarak <= 199, maka LCD akan menampilkan ‘Jarak Objek : cm‘ dan LED akan mati. Nilai dari Ultrasonic Sensor tersebut akan dikirim dengan komunikasi serial, yaitu I2C dari Arduino 3 (Arduino dengan Ultrasonic Sensor / Slave) ke Arduino 2 (Arduino dengan LCD / Master).Jika konsentrasi gas berubah, maka akan ada respon yang muncul juga. Jika konsentrasi <500, maka LED akan menyala. Jika konsentrasi >= 500, maka LED mati. Jika kemiringan mobil berubah, maka akan ada respon yang muncul juga. Jika Tilt = High, maka LED akan menyala. Jika Tilt = Low, maka LED mati. Begitu seterusnya ketika terjadi perubahan-perubahan pada sensor. </p>

## Source Code

Untuk code dari program kami ini, dapat diakses dari https://bit.ly/Proyek_8B_Github

## Tinkercad

Untuk tinkercad dari program kami ini, dapat diakses dari https://bit.ly/Proyek_8B_Tinkercad

## Video Presentasi

Untuk video presentasi dari program kami ini, dapat diakses dari https://bit.ly/Proyek_8B_Video

## Laporan Proyek Akhir

Untuk laporan proyek akhir kami, dapat diakses dari https://bit.ly/Proyek_8B_Laporan

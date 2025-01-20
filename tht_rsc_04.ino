// Jawaban Soal Nomor 4 (Soal Firmware)

#include <Wire.h>  // Library untuk I2C
#include <SPI.h>   // Library untuk SPI

// Konfigurasi I2C
const int i2cAddress = 0x3C; // Alamat perangkat I2C

// Konfigurasi SPI
const int spiCsPin = 10;     // Chip Select (CS) untuk perangkat SPI

void setup() {
  // Inisialisasi I2C
  Wire.begin(); // Mengatur Arduino sebagai master I2C
  Serial.begin(9600); // Untuk debugging

  // Inisialisasi SPI
  pinMode(spiCsPin, OUTPUT); // Atur pin CS sebagai output
  digitalWrite(spiCsPin, HIGH); // Set CS ke HIGH (nonaktifkan perangkat SPI secara default)
  SPI.begin(); // Memulai komunikasi SPI
}

void loop() {
  // Mengirim data ke perangkat I2C
  Wire.beginTransmission(i2cAddress);
  Wire.write("Hello I2C"); // Kirim data ke perangkat I2C
  Wire.endTransmission();
  delay(100);

  // Mengirim data ke perangkat SPI
  digitalWrite(spiCsPin, LOW);        // Aktifkan perangkat SPI (CS LOW)
  SPI.transfer(0x42);                 // Kirim data (contoh: 0x42)
  digitalWrite(spiCsPin, HIGH);       // Nonaktifkan perangkat SPI (CS HIGH)
  delay(100);
}

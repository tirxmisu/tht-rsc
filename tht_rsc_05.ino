// Pin yang akan menghasilkan sinyal PWM
const int pwmPin = 9; // Pin 9
const int frequency = 1000; // Frekuensi PWM dalam Hz (contoh: 1000 Hz)
const int period = 1000000 / frequency; // Periode PWM dalam mikrodetik

void setup() {
  // Atur pin sebagai output
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  // Duty cycle 50%: Waktu HIGH = waktu LOW
  digitalWrite(pwmPin, HIGH);          // Hidupkan pin
  delayMicroseconds(period / 2);       // Tahan selama setengah periode
  digitalWrite(pwmPin, LOW);           // Matikan pin
  delayMicroseconds(period / 2);       // Tahan selama setengah periode
}
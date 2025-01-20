# Jawaban Soal Wajib Nomor 5

import threading
import time

# Fungsi untuk timer pertama
def timer1():
    for i in range(5):  # Hitung 5 detik
        print(f"Timer 1: {i + 1} detik")
        time.sleep(1)  # Tunggu 1 detik
    print("Timer 1 selesai!")

# Fungsi untuk timer kedua
def timer2():
    for i in range(10):  # Hitung 10 detik
        print(f"Timer 2: {i + 1} detik")
        time.sleep(1)  # Tunggu 1 detik
    print("Timer 2 selesai!")

# Fungsi utama
def main():
    # Membuat thread untuk setiap timer
    thread1 = threading.Thread(target=timer1)
    thread2 = threading.Thread(target=timer2)

    # Memulai kedua thread
    thread1.start()
    thread2.start()

    # Tunggu kedua thread selesai
    thread1.join()
    thread2.join()

    print("Semua timer selesai!")

if __name__ == "__main__":
    main()

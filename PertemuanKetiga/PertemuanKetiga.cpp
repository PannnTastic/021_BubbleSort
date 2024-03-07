#include <iostream>
using namespace std;
int arr[20];//deklarasi variabel global arr dengan ukuran 20
int n;//deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() {//prosedur untuk input
    while (true) {
        cout << "Masukkan Banyak elemen Pada Array : ";//output ke layar
        cin >> n;//input ke pengguna
        if (n <= 20)//jika n kurang dari atau samadengan 20
            break;//keluar dari loop

        else {
            cout << "\nArray hanya dapat menampung 20 elemen\n";//output jikaelemen yang dimasukkan lebih dari 20
        }
    }

     cout << endl;//output baris kosong
     cout << "=================\n";
     cout << "Masukkan Elemen Array\n";//output ke layar
     cout << "================\n";

     for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
         cout << "Data ke-" << (i + 1) << ": ";//output ke layar
         cin >> arr[i];//input pengguna
     }

}

void bubbleSortArray() {//prosedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; //step 1
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {//step 2
            if (arr[j] > arr[j + 1]) {//step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1;//step 4

        cout << "\nPass " << pass - 1  << ": ";//output ke layar
        for (int k = 0; k < n; k++) {//lopping nilai k dari 0 hingga n-1
            cout << arr[k] << " ";//output ke layar
        }
        cout << endl;
    } while (pass <= n - 1);//step 5
}

void display() {
    cout << endl;
    cout << "=================\n";
    cout << "Element Array yang telah tersusun\n";
    cout << "=================\n";
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah Pass = " << n - 1 << endl;
    cout << endl;
}



int main() {//program utama
    input();//memanggil fungsi input
    bubbleSortArray();//memanggil fungsi bubble sort array
    display();//memanggil fungsi display
    system("pause");
    return 0;
}
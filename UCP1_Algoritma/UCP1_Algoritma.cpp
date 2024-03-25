//Tipe Teori
//1. Dengan cara membagikan menjadi 2 list, yang sudah tersusun dan yang belum, lalu taruh element yang belum disusun ke yang sudah disusun dengan posisi yang benar
//2. Dengan cara mencarikan angka paling rendah di array lalu tukarkan dengan angka index 0
//3. Untuk mengetahui berapa jumlah langkah yang dilakukan dapat melakukan (n-1) untuk langkah pertama lalu (n-2) dan seterusnya

//Tipe Praktikum
#include <iostream>
using namespace std;

int a[20];
int danan;

void input (){
    while (true) {
        cout << "Masukkan 2 Nim : ";
        cin >> danan;
        if (danan <= 2) {
            break;
        }
        else {
            cout << "Array hanya bisa sepanjang 2 NIM";
        }
        cout << endl;
        cout << "Masukkan NIM" << endl; 
        
        for (int i = 0; i < danan; i++) {
            cout << "NIM- " << (i + 1) << ": ";
            cin >> a[i];
        }

}
}
void display (){
    cout << endl;
    cout << "NIM-NIM yang telah tersusun : " << endl;
    for (int j = 0; j < danan; j++) {
        cout << "NIM-" << j + 1 << ": ";
        cout << a[j] << endl;
    }
    cout << endl;
}

void SortingArray (){
    int pass = 1;

    for (pass; pass <= danan - 1; pass + 1) {
        for (int j = 0; j <= danan - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

//if(main() = terhapus){
//dikeluarkan;
//}
int main()
{
    input();
    SortingArray();
    display();
    return 0;
}

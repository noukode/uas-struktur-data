#include <iostream>
#include <string>

using namespace std;

// NIM         : 220401010142
// Nama        : Hilmi Maulana Mukhlis
// Kelas       : IT204
// Mata Kuliah : Struktur Data & Algoritma

struct Mahasiswa {
    string nama;
    string alamat;
};

int main() {
    int total_data = 8;
    Mahasiswa mhs[total_data] = {
        {
            "Fahmi",
            "Jakarta"
        },
        {
            "Romi",
            "Solo"
        },
        {
            "Andri",
            "Jakarta"
        },
        {
            "Fadillah",
            "Banyuwangi"
        },
        {
            "Ruli",
            "Bandung"
        },
        {
            "Rudi",
            "Bali"
        },
        {
            "Dendi",
            "Purwokerto"
        },
        {
            "Zaki",
            "Madiun"
        }
    };

    cout << "--- Sorting data menggunakan metode Selection sort ---\n";
    cout << "Sebelum Sort Data :\n";
    cout << "Nama - Alamat\n";
    for (int i; i < total_data; i++) {
        cout << mhs[i].nama << " - " << mhs[i].alamat << endl;
    }

    for (int i = 0; i < total_data - 1; i++) {
        int lowest_index = i;
        for (int j = i + 1; j < total_data; j++) {
            if (mhs[j].nama < mhs[lowest_index].nama) {
                lowest_index = j;
            }
        }
        if(lowest_index != i){
            Mahasiswa temp = mhs[i];
            mhs[i] = mhs[lowest_index];
            mhs[lowest_index] = temp;
        }
    }

    cout << "\nSetelah Sort Data:\n";
    cout << "Nama - Alamat\n";
    for (int i; i < total_data; i++) {
        cout << mhs[i].nama << " - " << mhs[i].alamat << endl;
    }

    return 0;
}
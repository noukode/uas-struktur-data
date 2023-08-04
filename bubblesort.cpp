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

    cout << "--- Sorting data menggunakan metode Bubble sort ---\n";
    cout << "Sebelum Sort Data :\n";
    cout << "Nama - Alamat\n";
    for (int i; i < total_data; i++) {
        cout << mhs[i].nama << " - " << mhs[i].alamat << endl;
    }

    for (int i = 0; i < total_data - 1; ++i) {
        for (int j = 0; j < total_data - i - 1; ++j) {
            if (mhs[j].nama > mhs[j + 1].nama) {
                Mahasiswa temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }

    cout << "\nSetelah Sort Data:\n";
    cout << "Nama - Alamat\n";
    for (int i; i < total_data; i++) {
        cout << mhs[i].nama << " - " << mhs[i].alamat << endl;
    }

    return 0;
}
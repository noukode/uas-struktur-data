#include <iostream>

using namespace std;


int main() {
    int arr[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int founded_index[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    int input;
    
    cout << "Silahkan masukkan angka yang ingin anda cek : ";
    cin >> input;
    
    

    bool result = false;
    int total_found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == input){
            total_found += 1;
            for(int j = total_found - 1; j < total_found; j++){
                founded_index[j] = i+1;
            }
            result = true;
        }
    }

    if (result) {

        cout << "Angka " << input << " ada di index ke ";
        if(total_found > 1){
            for(int i = 0; i < total_found; i++){
                if(total_found == i + 1){
                    cout << founded_index[i] << endl;
                }else{
                    cout << founded_index[i] << " dan ";
                }
            }
        }else{
            cout << founded_index[0] << endl;
        }
    } else {
        cout << "Angka " << input << " tidak ada dalam array." << endl;
    }

    return 0;
}
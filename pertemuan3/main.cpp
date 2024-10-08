#include <iostream>

using namespace std;

//Mencari nilai terkecil dari dua bilangan
int min(int x, int y) {
    if (x < y) {
        cout << x << " LEBIH KECIL DARI " << y << endl;
        return x;
    } else if (x > y) {
        cout << y << " LEBIH KECIL DARI " << x << endl;
        return y;
    } else if (x == y) {
        cout << " NILAI X SAMA DENGAN NILAI Y " << endl;
        return y;
    }
}

int main()
{
    int x, y;

    //Input nilai
    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai y: ";
    cin >> y;

    // Memanggil fungsi min untuk mencari nilai terkecil dari x dan y
    min(x, y);

    return 0;
}

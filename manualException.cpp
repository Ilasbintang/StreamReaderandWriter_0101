#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 0.5;
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}
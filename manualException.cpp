#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 0.5;
        cout << "Pernyataan tidak akan diexsekusi" << endl;
    }
    catch (int a) {
        cout << "pengecualian akan diexekusi" << endl;
    }
    catch(...) {
        
    }
}
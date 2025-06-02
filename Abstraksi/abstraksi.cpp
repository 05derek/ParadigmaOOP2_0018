#include <iostream>

using namespace std;

class AbstraksiKlas {
    private:
        string x, y;

    public:

        void setxy (string a, string b) {
            x = a;
            y = b;
        }
        //Menampilkan nilai
        void display() {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};

int main() {
    AbstraksiKlas ak;
    ak.setxy("Yogyakarta", "Kampus");
    ak.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class BoardMarker
{
    private:
        string company, color;
        bool Refillabe, Ink_status;

    public:
        void setatt(string comp, string col, bool a, bool b)
        {
            company = comp;
            color = col;
            Refillabe = a;
            Ink_status = b;
        }

        bool getrefill()
        {
            return Refillabe;
        }

        bool getinksat()
        {
            return Ink_status;
        }

        void showinfo()
        {
            cout << endl << "Company: " << company
                 << endl << "Color: " << color
                 << endl << "Refillable: " << Refillabe
                 << endl << "Ink status: " << Ink_status << endl;
        }

        void refill(bool b)
        {
            if (b)
            {
                cout << endl << "Ink is refilled";
                Ink_status = 1;
                cout<<endl;
                write(Ink_status);
            }
            else
                cout << endl << "This marker can't be refilled!";
        }

        void write(bool a)
        {
            string writing;
            if (a)
            {
                cout << "Enter what you want to write: ";
                getline(cin, writing);
                cout << endl << writing;
            }
            else
                refill(getrefill());
        }
};

int main()
{
    BoardMarker b1, b2, b3;
    b1.setatt("Dollar", "Blue", 1, 0);
    b1.write(0);
    b2.setatt("Dollar", "Blue", 0, 0);
    b2.write(0);
    b3.setatt("Dollar", "Blue", 0, 1);
    b3.write(1);
    return 0;
}
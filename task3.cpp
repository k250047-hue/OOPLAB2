#include <iostream>
using namespace std;

class WaterBottle
{
private:
    string company, color;
    double capacity_ml;

public:
    void setCompany(string c)
    {
        company = c;
    }
    void setColor(string c)
    {
        color = c;
    }
    void setCapacityML(double ml)
    {
        capacity_ml = ml;
    }
    double getCapacityML()
    {
        return capacity_ml;
    }
    double getCapacityL()
    {
        return capacity_ml / 1000.0;
    }
    void drinkWater()
    {
        double drank;

        do
        {
            cout << endl << "Enter how much water you drank (in ml): ";
            cin >> drank;

            if (drank > capacity_ml)
            {
                cout << endl << "You are lying!" << endl;
                break; 
            }
            capacity_ml -= drank;

            if (capacity_ml == 0)
            {
                cout << endl << "You drank all the water." << endl;
                break; 
            }
            cout << endl << "Remaining water: "
                 << capacity_ml << " ml ("
                 << getCapacityL() << " L)" << endl;
        } while (capacity_ml != 0);
    }

    void showInfo()
    {
        cout << endl << "Company: " << company
             << endl << "Color: " << color
             << endl << "Capacity: " << capacity_ml << " ml ("
             << getCapacityL() << " L)" << endl;
    }
};

int main()
{
    WaterBottle b1;
    double ml;
    b1.setCompany("Aquafina");
    b1.setColor("Blue");

    cout << endl << "Enter bottle capacity in ml: ";
    cin >> ml;
    b1.setCapacityML(ml);
    b1.showInfo();
    b1.drinkWater();

    return 0;
}
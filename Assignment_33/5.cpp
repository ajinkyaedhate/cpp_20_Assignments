// 5. Create a base class called Photon. Use this class to store a double type value of
// wavelength that could be used to calculate photon energy. Create class
// calculate_photonEnergy which will inherit photon energy.
// Using these classes, calculate photon energy.

#include <iostream>
#include <cmath>
using namespace std;

const double h = 6.62607015e-34; // Planck's constant (J·s)
const double c = 299792458;      // velocity of light in m/s

class Photon
{
protected:
    double wavelength;

public:
    void setWavelength(double w)
    {
        wavelength = w;
    }
    virtual double photonenergy() = 0;
};

class calculate_photonEnergy : public Photon
{
public:
    double photonenergy() override
    {
        double energy = h * c / (wavelength);
        return energy;
    }
};

int main()
{
    double wavelength, Energy;
    calculate_photonEnergy E;
    cout << "Enter the wavelength" << endl;
    cin >> wavelength;
    E.setWavelength(wavelength);
    Energy = E.photonenergy();
    cout<<"Energy is : "<<Energy<<" joules"<<endl;

    return 0;
}
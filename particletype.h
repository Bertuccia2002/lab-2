#include <iostream>


class ParticleType {

public:
const char* GetfName() const {return fName;};
double GetfMass() const {return fMass;};
int GetfCharge() const {return fCharge;};
void Print() const {std::cout << GetfName() << GetfMass() << GetfCharge();} ;
ParticleType (const char* name, double mass, int charge);

private:
const char* fName;
const double fMass;
const int fCharge;
};




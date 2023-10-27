#include "particletype.h"

class ResonanceType: public ParticleType {

public:
double GetfWidth()const{return fWidth;};
void Print() const {std::cout << GetfWidth();} ;
ResonanceType(const char* name, double mass, int charge, double width); 

private:
const double fWidth;
};
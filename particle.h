#include "resonancetype.h"


class Particle {

public:
Particle(const char* name, double px=0, double py=0, double pz=0);
static void AddParticleType(const char* mane, double mass, double charge, double width);
void SetIndex(int index);
void SetIndex(const char* name);
static void PrintParticleTypes();
void PrintInfo() const;
double GetPx() const;
double GetPy() const;
double GetPz() const;
double GetMass() const;
double GetEnergy() const;
double InvMass(const Particle& p) const;
void SetP(double px, double py, double pz);

private:
static ParticleType* fParticleType[10];
static int fNParticleType;
static const int fMaxNumParticleType=10;
int fIndex;
double fPx;
double fPy;
double fPz;

};


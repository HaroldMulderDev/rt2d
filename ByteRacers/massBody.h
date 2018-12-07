#ifndef MASSBODY_H
#define MASSBODY_H

#include <rt2d/entity.h>

///@brief The MassBody is a sheet of destroyable sprites which has physics built in to it.
class MassBody : public Entity
{
public:

   // MassBody constructor
   MassBody();

   // MassBody destructor
   ~MassBody();

   virtual void update(float deltaTime);
private:
};

#endif // !MASSBODY_H

#ifndef __AIRPLANE__H__INCLUDE
#define __AIRPLANE__H__INCLUDE
#include <string>
class Airplane
{
public:
  std::string model;
  int current_velocity;
  int cruising_velocity;
  int max_velocity;
  int autonomy[2];
};

#endif

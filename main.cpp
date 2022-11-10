#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Task A" << std::endl;
  Coord3D pointP = {10, 20, 30};
  std::cout << "Length = " << length(&pointP) << std::endl; // would print 37.4166

  std::cout << "Task B" << std::endl;
  Coord3D pointQ = {-20, 21, -22};
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "Further is " << ans << std::endl; // So which point is farther?


  std::cout << "Task C" << std::endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl; // prints: 2 -10 100.4

  std::cout << "Task E" << std::endl;
  Coord3D *temp = createCoord3D(1,2,3);
  deleteCoord3D(temp);

  return 0;
}

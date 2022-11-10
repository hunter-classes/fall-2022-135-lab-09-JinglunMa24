#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main() {
	
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, -21, -22};

	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};

	// Task A
	std::cout << length(&pointP) << "\n-----------------------------------------------------\n";

	// Task B
	Coord3D * res = fartherFromOrigin(&pointP, &pointQ);
	std::cout << "Address of pointP: " << &pointP << "\nAddress of pointQ: " << &pointQ << "\nAnswer: " << res << "\n-----------------------------------------------------\n";

	// Task C
	move(&pos, &vel, 2.0);
	std::cout << pos.x << " " << pos.y << " " << pos.z << " " << "\n-----------------------------------------------------\n";

	// Task E
	Coord3D *newpos = createCoord3D(12, 23, -20);
	Coord3D *newvel = createCoord3D(26, 96, 90);
	move(newpos, newvel, 10.0);
	std::cout << "Coordinate after 10 second: " << (*newpos).x << " " << (*newpos).y << " " << (*newpos).z << "\n-----------------------------------------------------\n";

	deleteCoord3D(newpos);
	deleteCoord3D(newvel);

	return 0;
}

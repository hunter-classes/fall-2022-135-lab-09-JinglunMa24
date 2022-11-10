#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A") {
	Coord3D pointP = {0, 0, 0};
	Coord3D pointP1 = {10, 20, 30};
	Coord3D pointP2 = {8, 12, 38};

	CHECK(length(&pointP1) == sqrt(100 + 400 + 900));
	CHECK(length(&pointP2) == sqrt(64 + 144 + 1444));
	CHECK(length(&pointP) == 0);
}

TEST_CASE("Task B") {
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};

	CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);

	Coord3D pointP2 = {90, 65, 12};
	Coord3D pointQ2 = {200, 362, 566};
	CHECK(fartherFromOrigin(&pointP2, &pointQ2) == &pointQ2);
}

TEST_CASE("Task C") {
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
	move(&pos, &vel, 2.0);

	CHECK(pos.x == 2);
	CHECK(pos.y == -10);
	CHECK(pos.z == 100.4);
}

TEST_CASE("Task D") {
	Coord3D *object = createCoord3D(14, 20, 1002);
	CHECK((*object).x == 14);
	CHECK((*object).y == 20);
	CHECK((*object).z == 1002);

	deleteCoord3D(object);
}
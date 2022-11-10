#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <iostream>
#include <iomanip>

// add your tests here

Coord3D pointW = {0, 0, 0};
Coord3D pointX = {-10, -20, -30};
Coord3D pointY = {2.3, 5.2, 6.1};
Coord3D pointZ = {-0, -12, 30};

TEST_CASE("Task A"){
    double answer = length(&pointW);
    CHECK(answer - 0.0 < 0.0001);
    answer = length(&pointX);
    CHECK(answer - 37.4166 < 0.0001);
    answer = length(&pointY);
    CHECK(answer - 83.9906 < 0.0001);
    answer = length(&pointZ);
    CHECK(answer - 32.311 < 0.0001);

}

TEST_CASE("Task B"){
    CHECK(fartherFromOrigin(&pointW, &pointX) == &pointX);
    CHECK(fartherFromOrigin(&pointY, &pointZ) == &pointZ);
    CHECK(fartherFromOrigin(&pointW, &pointW) == &pointW);
    CHECK(fartherFromOrigin(&pointX, &pointY) == &pointX);
}

TEST_CASE("Task C"){
    move(&pointZ, &pointW, 2.0);
    Coord3D answer = {-0, -12, 30};
    CHECK(compare(&pointZ, &answer));

    move(&pointW, &pointZ, 3.5);
    answer = {0, -42, 105};
    CHECK(compare(&pointW, &answer));

    move(&pointX, &pointY, 5);
    answer = {1.5, 6, 0.5};
    CHECK(compare(&pointX, &answer));

    move(&pointY, &pointW, 0);
    answer = {2.3, 5.2, 6.1};
    CHECK(compare(&pointY, &answer));
}

TEST_CASE("Task E"){
    Coord3D temp = {1, 2, 3};
    Coord3D* newly = createCoord3D(1,2,3);
    CHECK(compare(newly, &temp));
    deleteCoord3D(newly);
    CHECK(!newly == false);

    temp = {3.46, 5.32, 231};
    newly = createCoord3D(3.46,5.32,231);
    CHECK(compare(newly, &temp));
    deleteCoord3D(newly);
    CHECK(!newly == false);

    temp = {-25, 56, 0};
    newly = createCoord3D(-25,56, 0);
    CHECK(compare(newly, &temp));
    deleteCoord3D(newly);
    CHECK(!newly == false);
}

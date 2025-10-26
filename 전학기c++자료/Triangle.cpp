//-----------------------------------------------------------------------------
// Triangle.cpp
//-----------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <random>
#include "Triangle.h"

using std::cout;

extern std::default_random_engine dre;
extern std::uniform_int_distribution uidTrianglePoint{ -99, 99 };			


Triangle::Triangle( )
{
	for (int i = 0; i < 3; ++i) {
		points[i].x = uidTrianglePoint( dre );
		points[i].y = uidTrianglePoint( dre );
	}
}

void Triangle::draw( ) const
{
	std::println( "[{:3d}] - 삼각형, 점1({:3d}, {:3d}), 점2({:3d}, {:3d}), 점3({:3d}, {:3d})", 
		id, points[0].x, points[0].y, points[1].x, points[1].y, points[2].x, points[2].y );
};

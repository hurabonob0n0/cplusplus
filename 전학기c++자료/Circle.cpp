//-----------------------------------------------------------------------------
// Circle.cpp
//-----------------------------------------------------------------------------
#include <print>
#include <random>
#include "Circle.h"

using std::cout;

std::default_random_engine dre{ 202412 };
std::uniform_int_distribution uidRad{ 1, 99 };			// 원의 반지름		
std::uniform_int_distribution uidPoint{ -99, 99 };		// 좌표		


Circle::Circle()
	: center{ uidPoint( dre ), uidPoint( dre ) }, rad{ uidRad( dre ) }
{

}

Circle::Circle( int n )
	: rad{ n }
{

}

int Circle::getRad( ) const  							// 반지름을 알려준다
{
	return rad;
}

void Circle::setRad( int n )
{
	rad = n;
}

void Circle::draw( ) const 
{
	std::println( "[{:3d}] - 원, 중심점({:3d}, {:3d}), 반지름 - {:3d}", id, center.x, center.y, rad );
}

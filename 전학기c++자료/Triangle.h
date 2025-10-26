//-----------------------------------------------------------------------------
// Triangle.h
//-----------------------------------------------------------------------------

#pragma once

#include "Shape.h"


class Triangle : public Shape {
public:
	Triangle( );
	~Triangle( ) = default;

	Triangle( const Triangle& ) = default;
	Triangle& operator=( const Triangle& ) = default;

	Triangle( Triangle&& ) = default;
	Triangle& operator=( Triangle&& ) = default;

	virtual void draw( ) const override;

private:
	Point points[3];
};

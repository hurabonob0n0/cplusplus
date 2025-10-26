//-----------------------------------------------------------------------------
// Circle.h
//-----------------------------------------------------------------------------

#pragma once

#include <iostream>
#include <print>
#include "Shape.h"


class Circle : public Shape {
public:
	Circle( );
	Circle( int n );

	int getRad( ) const;							// 반지름을 알려준다
	void setRad( int n );							// 반지름을 set

	virtual void draw( ) const override;

private:
	Point center;									// 중심점의 좌표
	int rad;										// 반지름
};


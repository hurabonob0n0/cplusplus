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

	int getRad( ) const;							// �������� �˷��ش�
	void setRad( int n );							// �������� set

	virtual void draw( ) const override;

private:
	Point center;									// �߽����� ��ǥ
	int rad;										// ������
};


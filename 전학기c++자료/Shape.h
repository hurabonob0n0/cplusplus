//-----------------------------------------------------------------------------
// Shape.h
//-----------------------------------------------------------------------------
#pragma once

struct Point {										// 2차원 좌표(x, y)
	int x;
	int y;
};

class Shape {
public:
	Shape() : id( ++gid ) { }

	virtual ~Shape( ) { }			// 상속구조에서 부모의 소멸자는 virtual 이어야 한다

	int getId( ) const {			// id 값을 돌려준다
		return id;
	}

	virtual void draw() const = 0;

private:
	static int gid;					// 객체를 디폴트 생성할때마다 고유번호를 부여한다

protected:							// Shape의 protected 멤버는
	int id;							// 자식 클래스에서는 private 멤버가 된다.
};


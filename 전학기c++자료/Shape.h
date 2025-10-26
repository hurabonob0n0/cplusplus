//-----------------------------------------------------------------------------
// Shape.h
//-----------------------------------------------------------------------------
#pragma once

struct Point {										// 2���� ��ǥ(x, y)
	int x;
	int y;
};

class Shape {
public:
	Shape() : id( ++gid ) { }

	virtual ~Shape( ) { }			// ��ӱ������� �θ��� �Ҹ��ڴ� virtual �̾�� �Ѵ�

	int getId( ) const {			// id ���� �����ش�
		return id;
	}

	virtual void draw() const = 0;

private:
	static int gid;					// ��ü�� ����Ʈ �����Ҷ����� ������ȣ�� �ο��Ѵ�

protected:							// Shape�� protected �����
	int id;							// �ڽ� Ŭ���������� private ����� �ȴ�.
};


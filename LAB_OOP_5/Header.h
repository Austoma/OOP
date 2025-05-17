#pragma once
#pragma once
#include<iostream>
using namespace std;

class triad {
protected:
	int first, second, third;
public:
	triad()
	{
		first = 0;
		second = 0;
		third = 0;
	}
	triad(int f, int s, int t)
	{
		first = f;
		second = s;
		third = t;
	}
	triad(const triad& t)
	{
		first = t.first;
		second = t.second;
		third = t.third;
	}

	int getFirst() const;
	int getSecond() const;
	int getThird() const;

	void setFirst(int f);
	void setSecond(int s);
	void setThird(int t);

	void print();

	bool operator==(const triad& t) const;
	bool operator!=(const triad& t) const;

	~triad() {}
};

class Time : public triad
{
public:
	Time() : triad() {}
	Time(int h, int m, int s) : triad(h, m, s) {}
	Time(const Time& t) : triad(t) {}

	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;

	void setHours(int h);
	void setMinutes(int m);
	void setSeconds(int s);

	bool operator<(const Time& t) const;
	bool operator>(const Time& t) const;
	bool operator<=(const Time& t) const;
	bool operator>=(const Time& t) const;

	Time& operator=(const Time& t);

	friend istream& operator>>(istream& is, Time& t);
	friend ostream& operator<<(ostream& os, const Time& t);
};

class Vector
{
private:
	triad** obj;
	int size;
	int current;
public:
	Vector()
	{
		obj = 0;
		size = 0;
		current = 0;
	}
	Vector(int length)
	{
		obj = new triad * [length];
		current = 0;
		size = length;
	}

	void fillVector(triad* p);

	friend ostream& operator<<(ostream& os, Vector& v);
};

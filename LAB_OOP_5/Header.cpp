#include"Header.h"

int triad::getFirst() const
{
	return first;
}
int triad::getSecond() const
{
	return second;
}
int triad::getThird() const
{
	return third;
}

void triad::setFirst(int f)
{
	first = f;
}
void triad::setSecond(int s)
{
	second = s;
}
void triad::setThird(int t)
{
	third = t;
}

void triad::print()
{
	cout << "(" << first << ", " << second << ", " << third << ")";
}

bool triad:: operator==(const triad& t) const
{
	return (first == t.first && second == t.second && third == t.third);
}
bool triad:: operator!=(const triad& t) const
{
	return !(operator==(t));
}

int Time::getHours() const
{
	return first;
}
int Time::getMinutes() const
{
	return second;
}
int Time::getSeconds() const
{
	return third;
}

void Time::setHours(int h)
{
	first = h;
}
void Time::setMinutes(int m)
{
	second = m;
}
void Time::setSeconds(int s)
{
	third = s;
}

bool Time:: operator<(const Time& t) const
{
	if (first < t.first) return true;
	else if (first == t.first && second < t.second) return true;
	else if (first == t.first && second == t.second && third < t.third) return true;
	else return false;
}
bool Time:: operator>(const Time& t) const
{
	return !(operator<(t) || operator==(t));
}
bool Time:: operator<=(const Time& t) const
{
	return operator<(t) || operator==(t);
}
bool Time:: operator>=(const Time& t) const
{
	return !operator<(t);
}

Time& Time:: operator=(const Time& t)
{
	if (this != &t)
	{
		first = t.first;
		second = t.second;
		third = t.third;
	}
	return *this;
}

istream& operator>>(istream& is, Time& t)
{
	cout << endl << "Введите часы: ";
	is >> t.first;
	cout << "Введите минуты: ";
	is >> t.second;
	cout << "Введите секунды: ";
	is >> t.third;
	return is;
}
ostream& operator<<(ostream& os, const Time& t)
{
	os << t.first << ":" << t.second << ":" << t.third;
	return os;
}

void Vector:: fillVector(triad* p)
{
	if (current < size)
	{
		obj[current] = p;
		++current;
	}
}

ostream& operator<<(ostream& os, Vector& v)
{
	if (v.size == 0)
		cout << "\nВектор пуст";
	else
	{
		triad** p = v.obj;
		for (int i = 0; i < v.current; i++)
		{
			(*p)->print();
			++p;
		}
	}
	return os;
}

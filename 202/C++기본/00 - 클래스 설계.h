#include <string>
using namespace std;

class Person
{
public:
	void 먹다();
	void 자다();

private:
	string name;
	unsigned int age;
};

class 연예인 : public Person
{
public:
	void 촬영하다();

private:
	int visual;
	string 예명;
};

class Singer : public 연예인
{
public:
	void 노래부르다();
	void 랩하다();
	void 춤추다();
	void 샤우팅();

private:
	int 가창력;
	int feel;
};

class Actor : public 연예인
{
public:
	void 눈물연기();
	void 싸대기연기();
	void 뽀뽀연기();

private:
	int 연기력;
};
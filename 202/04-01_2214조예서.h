#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class musicalInstrument {
public:
	string sound;
	musicalInstrument(int name, string sound);
	void play();
private:
	int name;
};

class stringInstrument : public musicalInstrument {
public:
	stringInstrument(int name, string sound, double resin, string stringN);
	void rubResin();
private:
	double resin;
	string stringN;	//� ���� ��� �ϴ���
	string bow;//Ȱ
};

class windInstrument : public musicalInstrument {
public:	
	windInstrument(int name, string sound, int piece, double length);
	void assemble();
private:
	double length;
	string cleaning; //�ݰ� �Ǳ� ���� ��� �Ǳ�����
};

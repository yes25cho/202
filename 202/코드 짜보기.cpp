#include <iostream>
#include <string>



//class signa {
//public:
//	signa(string name, int hp, int sm, int df)
//		:name(name), hp(hp), stamina(sm), defend(df) 
//	{
//	}
//	void print() {
//		cout << "이름 : " << name << endl;
//		cout << "체력 : " << hp << endl;
//		cout << "공격 : " << stamina << endl;
//		cout << "방어 : " <<defend << endl;
//	}
//private:
//	string name;
//	int hp;
//	int stamina;
//	int	defend;
//};
using namespace std;
template <typename tp1, typename tp2>
class signa {
	public:
		signa(tp1 name, tp2 hp, tp2 sm, tp2 df)
			:name(name), hp(hp), stamina(sm), defend(df) {};
		void print() {
			cout << "이름 : " << name << endl;
			cout << "체력 : " << hp << endl;
			cout << "공격 : " << stamina << endl;
			cout << "방어 : " <<defend << endl;
		}
	private:
		tp1 name;
		tp2 hp;
		tp2 stamina;
		tp2 defend;
};
int main() {
	signa<string, int>* pl = new signa<string, int>("조예서", 60, 40, 50);
	pl->print();
	delete pl;
}

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Mydata{
public:
	void setData(T pdata) {
		mydata = pdata;
	}
	T getData()
	{
		return mydata;
	}
private:
	T mydata;
};

int main(void) {
	Mydata<int> mydata1;
	Mydata<double> mydata2;


}
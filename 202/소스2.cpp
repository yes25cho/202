//class CBox {
//	public:
//		double width;
//};

class CBox {
private:
	double width;
public: 
	void set(double w) {
		width = w;
	}
};

class ChildBox : CBox {
public: 
	void setWidth(double w) {
		//width = w;
		set(w);
	}
};

class Phone {
	void call();
	void receive();
	void sendMessage();
};
class Music {
	void soundOn();
	void soundOff();
};

//class SmartPhone : Phone, Music {
//	SmartPhone();
//	~SmartPhone();
//};

class SmartPhone : private Phone{
	
};

class SmartPhone : private Music {
	
};

//SmartPhone::SmartPhone() {}
//SmartPhone::~SmartPhone() {}
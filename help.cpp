//setter/getter
void set(int x)
{
  //this.x = x;
}

int get() const{ return x;}

//10 element vactor random float
	std::vector<std::shared_ptr<float>> container;

	for (int i = 0; i < 10; i++)
	{
		float randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		container.push_back(std::make_shared<float>(randFloat));
	}
	/* random val -100 -> 100*/
	auto aa = (rand() % (201)) - 100;

//main
int main()
{

	return 0;
}

//sharedpointer
	std::vector<std::shared_ptr<Baum>> baum;

	baum.push_back(std::make_shared<Baum>(b1));

//exception
namespace var {
	class myException : public std::exception
	{
	public:
		const char* what() const noexcept override
		{
			return "Exception occured: Testexception for OOP Exam";
		}
	};

}
//template class
template <typename T>
class MyClass
{
public:
	MyClass<T>(T ta, T tb) : a(ta), b(tb) {};

//copy
	MyClass(const MyClass& src) {
		this->a = src.a;
		
		std::cout << "Copied!" << std::endl;

	};
	//move
		MyClass<T>(const MyClass& c) : a(c.a), b(c.b) {};

private:
	T a{0};
	T b{ 0 };
};

//virtual method
	virtual void print() const;
    void Baum::print() const
    {
        std::cout << "Baum" << " " << this->alter << " " << this->hohe << std::endl;
    }

    void print() const override;


	Baum& operator + (Baum baum);
    Baum& Baum::operator+(Baum baum)
    {
        Baum b = Baum(this->alter + baum.alter, this->hohe + baum.hohe);
        return b;
    }

//static class function without instance
class UniqueId
{
public:
	UniqueId() {};

	static int GetUniqueId()
	{
		static int uID = 0;
		if (uID > 0 && uID < std::numeric_limits<int>::max())
		{
			return uID++;
		}
		else
		{
			uID = 1;
			return 0;
		}
	}
};

//abstract class
class Abs
{
public: 
	virtual void print() const = 0;
};

class Demo : Abs
{
public:
	void print() const  override
	{
		std::cout << "Demo print" << std::endl;
	}
};

//T to binary
template <typename T>
T toBinary(T bit, T val)
{
	std::vector<T> vec(bit, 0);
	std::vector<T> vec1;
	
	while (!val == 0)
	{
		vec[bit-1] = val % 2;
		vec1.push_back(val % 2);
		val /= 2;
		bit--;
	}
	int count = 0;
	for (T i : vec1)
	{
		if (i == 0)
			count++;
	}
	return count;
}

/*-----------------------------------*/
#include <limits>
#include <stdexcept>

namespace VarP
{
	template <typename T>
	class ValNtoN
	{
		T min = std::numeric_limits<T>::lowest();
		T max = std::numeric_limits<T>::max();
		T wert {0};
	public:
		ValNtoN() = default;

		ValNtoN(T w, T mi = std::numeric_limits<T>::lowest(), T ma = std::numeric_limits<T>::max()) : min{mi}, max{ma}
		{
			setWert(w);
		}
		void setWert(T w) {
			if(w < min || w > max)
				throw std::out_of_range("..."):
		}

		T getWert() const { return wert;}
		T getMin() const {return this.min;}
		T getMin() const {return this.max;}

		operator T() const (return wert;)

		ValNtoN& operator =(double w) {setWert(w); return *this;}
	};
}

class Gramm : public IStringable
{
	VarP::ValNtoN<double> g{0,0};
public:
	Gramm(double w) : g{w,0} {}

	virtual double getGewicht() const { return g;}
	virtual void setGewicht(double w) {g.setGewicht(w);}

	virtual std::string getEinheit() const {return "g";}

	Gramm operator +(const Gramm& val) const { return Gramm(g + val.g);}
	Gramm operator -(const Gramm& val) const { return Gramm(g - val.g);}

	operator double() const {return getGewicht();}

	virtual std::string to_string() const {
		return std::to_string(getGewicht()) + " " getEinheit();
	}
};

std::ostream& operator << (std::ostream& os, const Gramm& gr)
{
	os << gr.to_string();
	return os;
}


class Kilo: public Gramm
{
	public:
		Kilo(double g) : Gramm(Kilo2Gramm(g)){}
		//copy ctor für abgeleitete klassen
		Kilo(const Gramm& g ) : Gramm(g){}

	double getGewicht() const override {return Gramm2Kilo(Gramm::getGewicht());}
	void setGewicht(double val) override {Gramm::setGewicht(Kilo2Gramm(val));}
	std::string getEinheit() const override { return "kg";}

	double Kilo2Gramm(double v) const { return v * 1000;}
	double Gramm2Kilo(double v) const { return v / 1000;}
};
class IStringable {
	virtual std::string to_string() const = 0;
};

//lambda lb to kg
std::transform(vec.beginn(), vec.end(), vec.beginnt(), 
	[](std::shared_ptr<Gramm> e)
	{
		if(e.getEinheit() == "lb")
		{
			return static_cast<std::shared_ptr<Gramm>>(std::make_shared<Kilo>(*e));
		}
		else
		{
			return e;
		}
	});

/*all gramm to txt*/ 
std::ostream file("gramm.txt");
if(file.is_open())
{
	file << "Gramm = { ";
	int c = 0;
	for (auto& i : vec)
	{
		if(e.getEinheit() == "g")
		{
			if(c++) file << ", ";
			file << e.getGewicht();
		}
	}
	file << " }" << std::endl;
	file.close();
}

/*vec middle template*/
template <typename T>
std::vector<T> centralItem(const std::vector<T> &cont)
{
    assert(cont.size() != 0);

    if (cont.size() % 2 == 1)
        return std::vector<T>{cont[cont.size() / 2]};
    else
        return std::vector<T>{cont[cont.size() / 2 - 1], cont[cont.size() / 2]};
}
/*template xml_string*/
template <typename T>
std::string to_xmlstring(const T &data, const std::string &elementname)
{
    std::stringstream ss;
    ss << "<" << elementname << " type=\"" << typeid(data).name() << "\"";
    ss << data;
    ss << "<\\" << elementname << ">";
    return ss.str();
}
/*Floating/ pair */
class Floating
{
protected:
	std::vector<std::uint16_t> data;
public:
	Floating(std::vector<std::uint16_t> d)
	{
		if (d.size() == 0 || d.size() > 10)
			throw std::out_of_range("...");
		this.data = d;
	}

	const std::vector<std::uint16_t> items() const { return data;}
	virtual std::string print() const { return "Floating: ";}

	void print2cout() const 
	{
		std::cout << print();
		for(auto& i : data)
		{
			std::cout << i << " ";
		}
		std::cout << std:: endl;
	}
)
};
inline Floating operato +(const Floating& lv, const Floating& rv){
	std::vector<std::uint16_t> res;
	for(auto v : lv.items()) {res.push_back(v)}
	for(auto v : rv.items()) {res.push_back(v)}
	return Floating{res};
}

class Pair : public Floating
{
	Pair(std::uint16_t v1, std::uint16_t v2) : Floating(std::vector<std::uint16_t>{v1,v2} ){}

	std::string print() const override { return "Pair: ";}
	Floating& operator =(Floating& s){
		if(s.item().size() != 2)
			throw std::runtime_error("...");
		this.data = s.item();
	}
};

/*3 biggest in vector */
    partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());

/*gröste 3 element von vector lambda sortiert*/
	std::partial_sort(container.begin(), container.begin() + 3, container.end(),
		[&](const std::shared_ptr<int>& left, const std::shared_ptr<int>& right)
		{
			if (*left.get() > *right.get())
				vec.push_back(*left.get());

			std::sort(vec.begin(), vec.end(), [&vec](auto a, auto b) {return a > b; });
			
			return *left.get() > *right.get();
		});
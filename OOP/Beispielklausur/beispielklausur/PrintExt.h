#include "classes.h"

namespace PrintExt
{
	template<typename T>
	static std::string to_PrintItemStr(std::string attributeName, T value) {
		std::string coutStr;

		coutStr = "\"" + attributeName + "\"" + "= " + std::to_string(value);

		return coutStr;
	}

	static std::string to_PrintItemStr(std::string attributeName, std::string value) {
		return "\"" + attributeName + "\"" + "=" + "\"" + value + "\"";

	}

	//template<typename T, int N>
	//class Array {
	//public:
	//	int arr[N];

	//	int getSize() const { return N; };
	//};
}


//	std::istream& operator >> (std::istream & Karnerinput, Student & student) {
//		"hallo" >> Student.s
//		return Karnerinput;
//	}
//
//	Student operator + (Student& other)(
//		return this.(...) + othert.(..);
//	)
//		student s3 = s1 + s2;
//}




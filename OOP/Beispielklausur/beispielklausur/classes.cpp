#include "PrintExt.h"
#include "classes.h"
std::string Teacher::getExtSVNr() {
	std::string ExtSVNr = (std::to_string(this->soznummer));
	std::string geb = (std::to_string(Person::geburtsdatum));

	//yyyymmdd -> ddmmyy
	std::string gebNeu = geb.substr(6, 2) + geb.substr(4, 2) + geb.substr(2, 2);
	ExtSVNr.append("-" + gebNeu);
	std::cout << ExtSVNr;


	return ExtSVNr;
}
void Email::setEmail(const std::string& email) {

	try {
		validate(email);
		this->email = email;
	}
	catch (const InvalidEmail::exception& e) {
		this->email = "";
		std::cerr << e.what() << " Email wurde mit einem leeren String belegt" << std::endl;
	}
	catch (const std::runtime_error& e) {
		this->email = "";
		std::cerr << e.what() << std::endl;
	}
	catch (...) {
		this->email = "";
		std::cerr << "Error..." << std::endl;
	}
}

std::ostream& operator<<(std::ostream& stream, Person& which)
{
	which.print(stream, which);

	return stream;
}


std::ostream& Person::print(std::ostream& stream, Person& which) {
	std::string sex;
	switch (which.geschlecht)
	{
	case Geschlecht::male:
		sex = "male";
		break;

	case Geschlecht::female:
		sex = "female";
		break;

	case Geschlecht::diverse:
		sex = "diverse";
		break;

	default:
		break;
	}

	stream << "person" << "= {" << PrintExt::to_PrintItemStr("name", which.name) << ", "
		<< PrintExt::to_PrintItemStr("birthdate", which.geburtsdatum) << ", "
		<< PrintExt::to_PrintItemStr("Gender", sex) << "}";

	return stream;
}
std::ostream& operator<<(std::ostream& stream, Teacher& which) {
	stream << "Teacher" << "= {";
	which.print(stream, which);
	stream << ", " << PrintExt::to_PrintItemStr("ExtSVNr", which.getExtSVNr()) << ", "
		<< PrintExt::to_PrintItemStr("Email", which.getEmail()) << "}" << std::endl;
	return stream;

}

std::ostream& operator <<(std::ostream& stream, Student& which)
{
	stream << "student" << "= {";
	which.print(stream, which);
	stream << ", " << PrintExt::to_PrintItemStr("Matrn", which.martikelnummer) << ", "
		<< PrintExt::to_PrintItemStr("Email", which.getEmail()) << "}" << std::endl;
	return stream;

}

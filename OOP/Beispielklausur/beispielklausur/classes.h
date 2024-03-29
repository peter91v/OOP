#pragma once
#include <string>
#include <iostream>
#include <array>
#include <exception>
//#include <stdexcept> 

enum class Geschlecht
{
	male,
	female,
	diverse
};
void check_email_validation(const std::string s);

class InvalidEmail : public std::runtime_error {
public:
	InvalidEmail(std::string& err_msg)
		: std::runtime_error(err_msg)
	{ };
};

class Email
{
public:
	Email() {};
	Email(std::string e)
		:email(e)
	{ };

	std::string getEmail() const { return this->email; };
	~Email() {};

	void setEmail(const std::string& email);

	static void validate(std::string email) {
		size_t pos = email.find('@');
		size_t dot = email.find('.');

		size_t maxlen = email.length();

		if (maxlen == 0) {
			throw InvalidEmail::exception("Keine Email-Adresse");
		}

		if (pos == std::string::npos) {
			throw InvalidEmail::exception("Invalid Email, no '@' found");
		}
		if (dot == std::string::npos) {
			throw InvalidEmail::exception("Invalid Email, no Top-Level-Domain domain");

		}
		if (pos == 0) {
			throw InvalidEmail::exception("Invalid Email, no local domain");

		}
		if (pos == maxlen - 1) {
			throw InvalidEmail::exception("Invalid Email, no host domain");
		}


	}
private:
	std::string email;

};


class Person {
protected:
	std::string name;
	int geburtsdatum;
	Geschlecht geschlecht;
public:
	Person(std::string n, int gb, Geschlecht g)
		: name(n), geburtsdatum(gb), geschlecht(g)
	{ };
	virtual std::ostream& print(std::ostream& stream, Person& which);
	std::string setname(std::string name) { return this->name = name; };
	std::string getname() const { return this->name; };
	friend std::ostream& operator<<(std::ostream& stream, Person& which);

	~Person() {};
};


class Student : public Person, public Email
{
public:
	Student(std::string n, int gb, Geschlecht g, long long int mnr)
		: Person(n, gb, g), martikelnummer(mnr)
	{ };
	Student(std::string n, int gb, Geschlecht g, long long int mnr, std::string em)
		: Person(n, gb, g), martikelnummer(mnr), Email(em)
	{ };

	~Student() {};

	friend std::ostream& operator <<(std::ostream& stream, Student& which);

private:
	long long int martikelnummer;

};

class Teacher : public Person, public Email
{
public:

	Teacher(const std::string& n, int gb, Geschlecht g, short svn, std::string em)
		: Person(n, gb, g), soznummer(svn), Email(em)
	{ };

	std::string getExtSVNr();
	~Teacher() {};
	friend std::ostream& operator << (std::ostream& stream, Teacher& which);

private:
	short soznummer;
};

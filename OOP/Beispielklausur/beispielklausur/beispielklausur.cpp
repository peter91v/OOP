// beispielklausur.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

//#include "pch.h"
#include "classes.h"
#include "PrintExt.h"
void check_email_validation(const std::string s)
{
	try {

		Email::validate(s);

	}
	catch (const InvalidEmail::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Error..." << std::endl;
	}
}



int main()
{
	// -------------------------------------------------------------------
	 // person instanziieren
	Person  p1("mustermann, max", 19770707, Geschlecht::male);
	// student instanziieren
	Student s1("example, eva maria", 19970217, Geschlecht::female, 1910581005, "evae@fhhmail.com");
	// teacher instanziieren
	Teacher t1("tempo, theox", 20010605, Geschlecht::diverse, 8976, "ttempo@fhhmail.com");
	// einf�gen eines studenten s2 mit den eigenen daten
   // INSERT YOUR CODE HERE!
	Student karner("Luca, Karner", 20000513, Geschlecht::male, 1234567890);


	// -------------------------------------------------------------------
	// Testen der Methode getExtSVNr
	// INSERT YOUR CODE HERE!
	t1.getExtSVNr();

	// Testen der Klasse Email mit Getter und Setter
	// INSERT YOUR CODE HERE!
	karner.setEmail("luka.karner@gmail.com");
	//s1.setEmail("varga.pter91gmail.com");
	std::cout << s1.getEmail() << std::endl;


	// -------------------------------------------------------------------
	// Testen der Function to_PrintItemStr aus dem Namensraum PrintExt
	// INSERT YOUR CODE HERE!


	std::cout << PrintExt::to_PrintItemStr("value", 1) << std::endl;
	std::cout << PrintExt::to_PrintItemStr("value", 1.12f) << std::endl;
	std::cout << PrintExt::to_PrintItemStr("email", karner.getEmail()) << std::endl;


	// -------------------------------------------------------------------
	//  Container f�r Person, Studenten und Teacher bef�llen
	// INSERT YOUR CODE HERE!

	// -------------------------------------------------------------------
	// Wir testen die operator << Methode einzeln f�r jeden Typ
	//std::cout << p1 << std::endl;
	//std::cout << s1 << std::endl;
	//std::cout << t1 << std::endl;

	// -------------------------------------------------------------------
	// Geben Sie in einer Schleife �ber alle Elemente des Container die 
	// einzelnen Elemente so auf cout aus, dass eine Ausgabe passend f�r 
	// den jeweils zugrundeliegenden Typ erfolgt.
	// INSERT YOUR CODE HERE!


	// -------------------------------------------------------------------
	// Alle Nachname in der Collection mit Hilfe von transform() und einer 
	// lambda function in Gro�buchstaben konvertieren
	// INSERT YOUR CODE HERE!
	//     std::transform(ifirst, ilast, ofirst, lambda_function);


	// -------------------------------------------------------------------
	// Email validieren �ber eigene kleine Validierungsfunktion

	check_email_validation("roland.graf@fh-salzburg.ac.at");
	check_email_validation("@fh-salzburg.ac.at");
	check_email_validation("roland.graf.fh-salzburg.ac.at");
	check_email_validation("rolandgraf@fh-salzburgacat");
	check_email_validation("roland.graf@");

	PrintExt::Array<int, 8> objekt1;

	std::cout << objekt1.getSize();

	for(item:collection){
		std::cout << item;
	}

	PrintExt::Array<std::string, 8> objekt2;
	std::cout << objekt2.getSize();
	std::cout << "Bye!\n";
	std::cout << s1;

}

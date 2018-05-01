#include <iostream>
#include <string>
#include "Kurasu.h"
Kurasu::Kurasu()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Kurasu::Kurasu(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Saber::Saber()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Saber::Saber(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Archer::Archer()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Archer::Archer(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Lancer::Lancer()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Lancer::Lancer(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Rider::Rider()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Rider::Rider(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Caster::Caster()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Caster::Caster(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Assassin::Assassin()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Assassin::Assassin(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Berserker::Berserker()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Berserker::Berserker(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
ExtraClass::ExtraClass()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
ExtraClass::ExtraClass(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Ruler::Ruler()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Ruler::Ruler(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
Avenger::Avenger()
{
	_rarity = 0;
	_illustrator = "";
	_name = "";
	_np = "";
	_gender = "";
}
Avenger::Avenger(int rarity, std::string illustrator, std::string name, std::string np, std::string gender)
{
	_rarity = rarity;
	_illustrator = illustrator;
	_name = name;
	_np = np;
	_gender = gender;
}
std::ostream & operator<<(std::ostream & os, const Saber & s)
{
	os << "Rarity: " << s.getRarity() << std::endl
		<< "Illustrator: " << s.getIllustrator() << std::endl
		<< "Name: " << s.getName() << std::endl
		<< "Noble Phantasm: " << s.getNp() << std::endl
		<< "Gender" << std::endl << s.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Archer & archer)
{
	os << "Rarity: " << archer.getRarity() << std::endl
		<< "Illustrator: " << archer.getIllustrator() << std::endl
		<< "Name: " << archer.getName() << std::endl
		<< "Noble Phantasm: " << archer.getNp() << std::endl
		<< "Gender" << std::endl << archer.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Lancer & l)
{
	os << "Rarity: " << l.getRarity() << std::endl
		<< "Illustrator: " << l.getIllustrator() << std::endl
		<< "Name: " << l.getName() << std::endl
		<< "Noble Phantasm: " << l.getNp() << std::endl
		<< "Gender" << std::endl << l.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Rider & rider)
{
	os << "Rarity: " << rider.getRarity() << std::endl
		<< "Illustrator: " << rider.getIllustrator() << std::endl
		<< "Name: " << rider.getName() << std::endl
		<< "Noble Phantasm: " << rider.getNp() << std::endl
		<< "Gender" << std::endl << rider.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Caster & c)
{
	os << "Rarity: " << c.getRarity() << std::endl
		<< "Illustrator: " << c.getIllustrator() << std::endl
		<< "Name: " << c.getName() << std::endl
		<< "Noble Phantasm: " << c.getNp() << std::endl
		<< "Gender" << std::endl << c.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Assassin & assassin)
{
	os << "Rarity: " << assassin.getRarity() << std::endl
		<< "Illustrator: " << assassin.getIllustrator() << std::endl
		<< "Name: " << assassin.getName() << std::endl
		<< "Noble Phantasm: " << assassin.getNp() << std::endl
		<< "Gender" << std::endl << assassin.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Berserker & b)
{
	os << "Rarity: " << b.getRarity() << std::endl
		<< "Illustrator: " << b.getIllustrator() << std::endl
		<< "Name: " << b.getName() << std::endl
		<< "Noble Phantasm: " << b.getNp() << std::endl
		<< "Gender" << std::endl << b.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Ruler & ruler)
{
	os << "Rarity: " << ruler.getRarity() << std::endl
		<< "Illustrator: " << ruler.getIllustrator() << std::endl
		<< "Name: " << ruler.getName() << std::endl
		<< "Noble Phantasm: " << ruler.getNp() << std::endl
		<< "Gender" << std::endl << ruler.getGender() << std::endl;
	return os;
}
std::ostream & operator<<(std::ostream & os, const Avenger & avenger)
{
	os << "Rarity: " << avenger.getRarity() << std::endl
		<< "Illustrator: " << avenger.getIllustrator() << std::endl
		<< "Name: " << avenger.getName() << std::endl
		<< "Noble Phantasm: " << avenger.getNp() << std::endl
		<< "Gender" << std::endl << avenger.getGender() << std::endl;
	return os;
}
void Ruler::galGunDisplay()
{
	std::cout << "WALL OF TEXT";
	system("PAUSE");
}
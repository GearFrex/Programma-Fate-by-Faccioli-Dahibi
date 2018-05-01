#pragma once
#include<iostream>
#include<vector>
#include<exception>
class Kurasu
{
protected:
	int _rarity;
	std::string _illustrator;
	std::string _name;
	std::string _np;
	std::string _gender;
public:
	Kurasu();
	Kurasu(int, std::string, std::string, std::string, std::string);
	std::vector<std::string> _activeSkill;
	std::vector<std::string> _passiveSkill;
	virtual int getRarity() const = 0;
	virtual std::string getIllustrator() const = 0;
	virtual std::string getName() const = 0;
	virtual std::string getNp() const = 0;
	virtual std::string getGender() const = 0;
	virtual void setRarity(int) = 0;
	virtual void setIllustrator(std::string) = 0;
	virtual void setName(std::string) = 0;
	virtual void setNp(std::string) = 0;
	virtual void setGender(std::string) = 0;
};
class Saber
	: public Kurasu
{
public:
	Saber();
	Saber(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Saber& s);
};
class Archer
	: public Kurasu
{
public:
	Archer();
	Archer(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Archer& archer);
};
class Lancer
	: public Kurasu
{
public:
	Lancer();
	Lancer(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Lancer& l);
};
class Rider
	: public Kurasu
{
public:
	Rider();
	Rider(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Rider& rider);
};
class Caster
	: public Kurasu
{
public:
	Caster();
	Caster(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Caster& c);
};
class Assassin
	: public Kurasu
{
public:
	Assassin();
	Assassin(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Assassin& assassin);
};
class Berserker
	: public Kurasu
{
public:
	Berserker();
	Berserker(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Berserker& b);
};
class ExtraClass
{
protected:
	int _rarity;
	std::string _illustrator;
	std::string _name;
	std::string _np;
	std::string _gender;
public:
	ExtraClass();
	ExtraClass(int, std::string, std::string, std::string, std::string);
	std::vector<std::string> _activeSkill;
	std::vector<std::string> _passiveSkill;
	virtual int getRarity() const = 0;
	virtual std::string getIllustrator() const = 0;
	virtual std::string getName() const = 0;
	virtual std::string getNp() const = 0;
	virtual std::string getGender() const = 0;
	virtual void setRarity(int) = 0;
	virtual void setIllustrator(std::string) = 0;
	virtual void setName(std::string) = 0;
	virtual void setNp(std::string) = 0;
	virtual void setGender(std::string) = 0;
};
class Ruler
	: public ExtraClass
{
public:
	Ruler();
	Ruler(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Ruler& ruler);
	static void galGunDisplay();
};
class Avenger
	: public ExtraClass
{
public:
	Avenger();
	Avenger(int, std::string, std::string, std::string, std::string);
	int getRarity() const
	{
		return _rarity;
	}
	std::string getIllustrator() const
	{
		return _illustrator;
	}
	std::string getName() const
	{
		return _name;
	}
	std::string getNp() const
	{
		return _np;
	}
	std::string getGender() const
	{
		return _gender;
	}
	void setRarity(int rarity)
	{
		_rarity = rarity;
	}
	void setIllustrator(std::string illustrator)
	{
		_illustrator = illustrator;
	}
	void setName(std::string name)
	{
		_name = name;
	}
	void setNp(std::string np)
	{
		_np = np;
	}
	void setGender(std::string gender)
	{
		_gender = gender;
	}
	friend std::ostream& operator<<(std::ostream& os, const Avenger& avenger);
};
class myexc
	: public std::exception
{
	virtual const char* what() const throw()
	{
		return "ERROR";
	}
};
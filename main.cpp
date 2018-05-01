#include <iostream>
#include <string>
#include <Array>
#include "Kurasu.h"
enum Series
{
	FateStayNight = 1,
	FateApocrypha = 2
};
enum Classes
{
	saber = 1,
	archer = 2,
	lancer = 3,
	rider = 4,
	assassin = 5,
	caster = 6,
	berserker = 7, //Berser-CAR
	ruler = 8,
	avenger = 9
};
struct Artoria
{
	int rarity = 5;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "Artoria Pendragon";
	std::string np = "Excalibur";
	std::string gender = "Female";
};
struct Siegfried
{
	int rarity = 4;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Siegfried";
	std::string np = "Balmung";
	std::string gender = "Male";
};
struct EMIYA
{
	int rarity = 4;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "EMIYA";
	std::string np = "Unlimited Blade Works";
	std::string gender = "Male";
};
struct Chiron
{
	int rarity = 4;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Chiron";
	std::string np = "Antares Snipe";
	std::string gender = "Male";
};
struct Cu
{
	int rarity = 3;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "Cu Chulainn";
	std::string np = "Gae Bolg";
	std::string gender = "Male";
};
struct Vlad
{
	int rarity = 4;
	std::string illustrator = "Wada Arco";
	std::string name = "Vlad III";
	std::string np = "Kazikli Bey";
	std::string gender = "Male";
};
struct Medusa
{
	int rarity = 3;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "Medusa";
	std::string np = "Bellerophon";
	std::string gender = "Female";
};
struct Astolfo
{
	int rarity = 4;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Astolfo";
	std::string np = "Hippogryph";
	std::string gender = "Unknown";
};
struct Sasaki
{
	int rarity = 1;
	std::string illustrator = "Mata";
	std::string name = "Sasaki Kojiro";
	std::string np = "Tsubame Gaeshi";
	std::string gender = "Male";
};
struct Jack
{
	int rarity = 5;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Jack the Ripper";
	std::string np = "Maria the Ripper";
	std::string gender = "Female";
};
struct Medea
{
	int rarity = 3;
	std::string illustrator = "Nekotawawa";
	std::string name = "Medea";
	std::string np = "Rule Breaker";
	std::string gender = "Female";
};
struct Avicebron
{
	int rarity = 3;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Avicebron";
	std::string np = "Golem Keter Malkuth";
	std::string gender = "Male";
};
struct Heracles
{
	int rarity = 4;
	std::string illustrator = "Azusa";
	std::string name = "Heracles";
	std::string np = "Nine Lives";
	std::string gender = "Male";
};
struct Spartacus
{
	int rarity = 1;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Spartacus";
	std::string np = "Crying Wormonger";
	std::string gender = "Male";
};
struct Jeanne
{
	int rarity = 5;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "Jeanne D'Arc";
	std::string np = "Luminosite' Eternelle";
	std::string gender = "Female";
};
struct Amakusa
{
	int rarity = 5;
	std::string illustrator = "Konoe Ototsugu";
	std::string name = "Amakusa Shioru Toukisada";
	std::string np = "Twin Arm - Big Crunch";
	std::string gender = "Male";
};
struct Alter
{
	int rarity = 5;
	std::string illustrator = "Takeuchi Takeshi";
	std::string name = "Jeanne D'Arc (Alter)";
	std::string np = "Le Grondement de la Haine";
	std::string gender = "Female";
};
struct Angra 
{
	int rarity = 0;
	std::string illustrator = " Nekotawawa";
	std::string name = "Angra Mainyu";
	std::string np = "Verg Avesta";
	std::string gender = "Male";
};
int main()
{
	try {
		int selector;
		Saber artoria;
		Artoria saber1;
		Siegfried saber2;
		Archer emiya;
		EMIYA archer1;
		Chiron archer2;
		Lancer cu;
		Cu lancer1;
		Vlad lancer2;
		Rider medusa;
		Medusa rider1;
		Astolfo rider2;
		Assassin sasaki;
		Sasaki assassin1;
		Jack assassin2;
		Caster medea;
		Medea caster1;
		Avicebron caster2;
		Berserker heracles;
		Heracles berserker1;
		Spartacus berserker2;
		Ruler jeanne;
		Jeanne ruler1;
		Amakusa ruler2;
		Avenger alter;
		Alter avenger1;
		Angra avenger2;
		Kurasu *pointer;
		ExtraClass *anotherPointer;
		myexc myex;
		std::cout << "Selezionare una delle due serie:" << std::endl << "1. Fate/Stay Night" << std::endl << "2. Fate/Apocrypha" << std::endl;
		std::cin >> selector;
		switch (selector)
		{
		case FateStayNight:
			std::cout << std::endl << "Selezionare una classe:" << std::endl << std::endl
				<< "MAIN CLASSES" << std::endl << "1. Saber" << std::endl
				<< "2. Archer" << std::endl
				<< "3. Lancer" << std::endl
				<< "4. Rider" << std::endl
				<< "5. Assassin" << std::endl
				<< "6. Caster" << std::endl
				<< "7. Berserker" << std::endl
				<< "EXTRA CLASSES" << std::endl << "8. Ruler" << std::endl
				<< "9. Avenger" << std::endl;
			std::cin >> selector;
			switch (selector)
			{
			case saber:
				std::cout << std::endl;
				artoria.setRarity(saber1.rarity);
				artoria.setIllustrator(saber1.illustrator);
				artoria.setName(saber1.name);
				artoria.setNp(saber1.np);
				artoria.setGender(saber1.gender);
				artoria._activeSkill.push_back("Charisma");
				artoria._activeSkill.push_back("Mana Burst");
				artoria._activeSkill.push_back("Instict");
				artoria._activeSkill.shrink_to_fit();
				artoria._passiveSkill.push_back("Magic Resistance");
				artoria._passiveSkill.push_back("Riding");
				artoria._passiveSkill.shrink_to_fit();
				std::cout << artoria;
				for (std::vector<std::string>::iterator it = artoria._activeSkill.begin(); it < artoria._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = artoria._passiveSkill.begin(); it < artoria._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &artoria;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case archer:
				std::cout << std::endl;
				emiya.setRarity(archer1.rarity);
				emiya.setIllustrator(archer1.illustrator);
				emiya.setName(archer1.name);
				emiya.setNp(archer1.np);
				emiya.setGender(archer1.gender);
				emiya._activeSkill.push_back("Charisma");
				emiya._activeSkill.push_back("Mana Burst");
				emiya._activeSkill.push_back("Instict");
				emiya._activeSkill.shrink_to_fit();
				emiya._passiveSkill.push_back("Magic Resistance");
				emiya._passiveSkill.push_back("Independent Action");
				emiya._passiveSkill.shrink_to_fit();
				std::cout << emiya;
				for (std::vector<std::string>::iterator it = emiya._activeSkill.begin(); it < emiya._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = emiya._passiveSkill.begin(); it < emiya._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &emiya;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case lancer:
				std::cout << std::endl;
				cu.setRarity(lancer1.rarity);
				cu.setIllustrator(lancer1.illustrator);
				cu.setName(lancer1.name);
				cu.setNp(lancer1.np);
				cu.setGender(lancer1.gender);
				cu._activeSkill.push_back("Battle Continuation");
				cu._activeSkill.push_back("Protection from Arrows");
				cu._activeSkill.push_back("Disengage");
				cu._activeSkill.shrink_to_fit();
				cu._passiveSkill.push_back("Magic Resistance");
				cu._passiveSkill.push_back("Divinity");
				cu._passiveSkill.shrink_to_fit();
				std::cout << cu;
				for (std::vector<std::string>::iterator it = cu._activeSkill.begin(); it < cu._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = cu._passiveSkill.begin(); it < cu._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &cu;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case rider:
				std::cout << std::endl;
				medusa.setRarity(rider1.rarity);
				medusa.setIllustrator(rider1.illustrator);
				medusa.setName(rider1.name);
				medusa.setNp(rider1.np);
				medusa.setGender(rider1.gender);
				medusa._activeSkill.push_back("Mystic Eyes");
				medusa._activeSkill.push_back("Monstrous Strength");
				medusa._activeSkill.push_back("Blood Fort Andromeda");
				medusa._activeSkill.shrink_to_fit();
				medusa._passiveSkill.push_back("Magic Resistance");
				medusa._passiveSkill.push_back("Independent Action");
				medusa._passiveSkill.push_back("Riding");
				medusa._passiveSkill.push_back("Divinity");
				medusa._passiveSkill.shrink_to_fit();
				std::cout << medusa;
				for (std::vector<std::string>::iterator it = medusa._activeSkill.begin(); it < medusa._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = medusa._passiveSkill.begin(); it < medusa._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &medusa;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case assassin:
				std::cout << std::endl;
				sasaki.setRarity(assassin1.rarity);
				sasaki.setIllustrator(assassin1.illustrator);
				sasaki.setName(assassin1.name);
				sasaki.setNp(assassin1.np);
				sasaki.setGender(assassin1.gender);
				sasaki._activeSkill.push_back("Eye of the Mind (False)");
				sasaki._activeSkill.push_back("Fade Out");
				sasaki._activeSkill.push_back("Sense of Subtle Elegance");
				sasaki._activeSkill.shrink_to_fit();
				sasaki._passiveSkill.push_back("Presence Concealment");
				sasaki._passiveSkill.shrink_to_fit();
				std::cout << sasaki;
				for (std::vector<std::string>::iterator it = sasaki._activeSkill.begin(); it < sasaki._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = sasaki._passiveSkill.begin(); it < sasaki._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &sasaki;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case caster:
				std::cout << std::endl;
				medea.setRarity(caster1.rarity);
				medea.setIllustrator(caster1.illustrator);
				medea.setName(caster1.name);
				medea.setNp(caster1.np);
				medea.setGender(caster1.gender);
				medea._activeSkill.push_back("High-Speed Divine Words");
				medea._activeSkill.push_back("Argon Coin: The Golden Fleece");
				medea._activeSkill.push_back("Teachings of Circe");
				medea._activeSkill.shrink_to_fit();
				medea._passiveSkill.push_back("Territory Creation");
				medea._passiveSkill.push_back("Item Construction");
				medea._passiveSkill.shrink_to_fit();
				std::cout << medea;
				for (std::vector<std::string>::iterator it = medea._activeSkill.begin(); it < medea._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = medea._passiveSkill.begin(); it < medea._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &medea;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case berserker:
				std::cout << std::endl;
				heracles.setRarity(berserker1.rarity);
				heracles.setIllustrator(berserker1.illustrator);
				heracles.setName(berserker1.name);
				heracles.setNp(berserker1.np);
				heracles.setGender(berserker1.gender);
				heracles._activeSkill.push_back("Bravery");
				heracles._activeSkill.push_back("Eye of the Mind (False)");
				heracles._activeSkill.push_back("Battle Continuation");
				heracles._activeSkill.shrink_to_fit();
				heracles._passiveSkill.push_back("Mad Enhancement");
				heracles._passiveSkill.push_back("Divinity");
				heracles._passiveSkill.shrink_to_fit();
				std::cout << heracles;
				for (std::vector<std::string>::iterator it = heracles._activeSkill.begin(); it < heracles._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = heracles._passiveSkill.begin(); it < heracles._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &heracles;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case ruler:
				std::cout << std::endl;
				jeanne.setRarity(ruler1.rarity);
				jeanne.setIllustrator(ruler1.illustrator);
				jeanne.setName(ruler1.name);
				jeanne.setNp(ruler1.np);
				jeanne.setGender(ruler1.gender);
				jeanne._activeSkill.push_back("Revelation");
				jeanne._activeSkill.push_back("True Name Discernment");
				jeanne._activeSkill.push_back("God's Resolution");
				jeanne._activeSkill.shrink_to_fit();
				jeanne._passiveSkill.push_back("Magic Resistance");
				jeanne._passiveSkill.shrink_to_fit();
				std::cout << jeanne;
				for (std::vector<std::string>::iterator it = jeanne._activeSkill.begin(); it < jeanne._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = jeanne._passiveSkill.begin(); it < jeanne._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				anotherPointer = &jeanne;
				std::cout << "Dynamic Binding: " << anotherPointer->getName() << std::endl;
				break;
			case avenger:
				std::cout << std::endl;
				alter.setRarity(avenger1.rarity);
				alter.setIllustrator(avenger1.illustrator);
				alter.setName(avenger1.name);
				alter.setNp(avenger1.np);
				alter.setGender(avenger1.gender);
				alter._activeSkill.push_back("Self-Modification");
				alter._activeSkill.push_back("Dragon Witch");
				alter._activeSkill.push_back("Ephemeral Dream");
				alter._activeSkill.shrink_to_fit();
				alter._passiveSkill.push_back("Avenger");
				alter._passiveSkill.push_back("Oblivion Correction");
				alter._passiveSkill.push_back("Self-Replenishment (Magic)");
				alter._passiveSkill.shrink_to_fit();
				std::cout << alter;
				for (std::vector<std::string>::iterator it = alter._activeSkill.begin(); it < alter._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = alter._passiveSkill.begin(); it < alter._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				anotherPointer = &alter;
				std::cout << "Dynamic Binding: " << anotherPointer->getName() << std::endl;
				break;
			default:
				throw myex;
				break;
			}
			break;
		case FateApocrypha:
			std::cout << "selezionare una classe:" << std::endl
				<< "MAIN CLASSES" << "1. Saber" << std::endl
				<< "2. Archer" << std::endl
				<< "3. Lancer" << std::endl
				<< "4. Rider" << std::endl
				<< "5. Assassin" << std::endl
				<< "6. Caster" << std::endl
				<< "7. Berserker" << std::endl
				<< "EXTRA CLASSES" << std::endl << "8. Ruler" << std::endl
				<< "9. Avenger";
			std::cin >> selector;
			switch (selector)
			{
			case saber:
				std::cout << std::endl;
				artoria.setRarity(saber2.rarity);
				artoria.setIllustrator(saber2.illustrator);
				artoria.setName(saber2.name);
				artoria.setNp(saber2.np);
				artoria.setGender(saber2.gender);
				artoria._activeSkill.push_back("Golden Rule");
				artoria._activeSkill.push_back("Disengage");
				artoria._activeSkill.push_back("Dragon Slayer");
				artoria._activeSkill.shrink_to_fit();
				artoria._passiveSkill.push_back("Riding");
				artoria._passiveSkill.shrink_to_fit();
				std::cout << artoria;
				for (std::vector<std::string>::iterator it = artoria._activeSkill.begin(); it < artoria._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = artoria._passiveSkill.begin(); it < artoria._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &artoria;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case archer:
				std::cout << std::endl;
				emiya.setRarity(archer2.rarity);
				emiya.setIllustrator(archer2.illustrator);
				emiya.setName(archer2.name);
				emiya.setNp(archer2.np);
				emiya.setGender(archer2.gender);
				emiya._activeSkill.push_back("Eye of the Mind (True)");
				emiya._activeSkill.push_back("Consecration of Eternal Life");
				emiya._activeSkill.push_back("Wisdom of Divine Gift");
				emiya._activeSkill.shrink_to_fit();
				emiya._passiveSkill.push_back("Magic Resistance");
				emiya._passiveSkill.push_back("Independent Action");
				emiya._passiveSkill.push_back("Divinity");
				emiya._passiveSkill.shrink_to_fit();
				std::cout << emiya;
				for (std::vector<std::string>::iterator it = emiya._activeSkill.begin(); it < emiya._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = emiya._passiveSkill.begin(); it < emiya._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &emiya;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case lancer:
				std::cout << std::endl;
				cu.setRarity(lancer2.rarity);
				cu.setIllustrator(lancer2.illustrator);
				cu.setName(lancer2.name);
				cu.setNp(lancer2.np);
				cu.setGender(lancer2.gender);
				cu._activeSkill.push_back("Protection of Faith");
				cu._activeSkill.push_back("Military Tactics");
				cu._activeSkill.push_back("Innocent Monster");
				cu._activeSkill.shrink_to_fit();
				cu._passiveSkill.push_back("Magic Resistance");
				cu._passiveSkill.shrink_to_fit();
				std::cout << cu;
				for (std::vector<std::string>::iterator it = cu._activeSkill.begin(); it < cu._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = cu._passiveSkill.begin(); it < cu._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &cu;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case rider:
				std::cout << std::endl;
				medusa.setRarity(rider2.rarity);
				medusa.setIllustrator(rider2.illustrator);
				medusa.setName(rider2.name);
				medusa.setNp(rider2.np);
				medusa.setGender(rider2.gender);
				medusa._activeSkill.push_back("Monstrous Strength");
				medusa._activeSkill.push_back("Trap of Argalia: Down with a Touch!");
				medusa._activeSkill.push_back("Evaporation of Sanity");
				medusa._activeSkill.shrink_to_fit();
				medusa._passiveSkill.push_back("Magic Resistance");
				medusa._passiveSkill.push_back("Riding");
				medusa._passiveSkill.push_back("Independent Action");
				medusa._passiveSkill.shrink_to_fit();
				std::cout << medusa;
				for (std::vector<std::string>::iterator it = medusa._activeSkill.begin(); it < medusa._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = medusa._passiveSkill.begin(); it < medusa._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &medusa;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case assassin:
				std::cout << std::endl;
				sasaki.setRarity(assassin2.rarity);
				sasaki.setIllustrator(assassin2.illustrator);
				sasaki.setName(assassin2.name);
				sasaki.setNp(assassin2.np);
				sasaki.setGender(assassin2.gender);
				sasaki._activeSkill.push_back("Murderer of the Misty Night");
				sasaki._activeSkill.push_back("Information Erasure");
				sasaki._activeSkill.push_back("Surgery");
				sasaki._activeSkill.shrink_to_fit();
				sasaki._passiveSkill.push_back("Presence Concealment");
				sasaki._passiveSkill.shrink_to_fit();
				std::cout << sasaki;
				for (std::vector<std::string>::iterator it = sasaki._activeSkill.begin(); it < sasaki._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = sasaki._passiveSkill.begin(); it < sasaki._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &sasaki;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case caster:
				std::cout << std::endl;
				medea.setRarity(caster2.rarity);
				medea.setIllustrator(caster2.illustrator);
				medea.setName(caster2.name);
				medea.setNp(caster2.np);
				medea.setGender(caster2.gender);
				medea._activeSkill.push_back("Numerology");
				medea._activeSkill.push_back("High-Speed Incantation");
				medea._activeSkill.push_back("Fig Tree of Tranquility");
				medea._activeSkill.shrink_to_fit();
				medea._passiveSkill.push_back("Territory Creation");
				medea._passiveSkill.push_back("Item Construction");
				medea._passiveSkill.shrink_to_fit();
				std::cout << medea;
				for (std::vector<std::string>::iterator it = medea._activeSkill.begin(); it < medea._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = medea._passiveSkill.begin(); it < medea._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &medea;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case berserker:
				std::cout << std::endl;
				heracles.setRarity(berserker2.rarity);
				heracles.setIllustrator(berserker2.illustrator);
				heracles.setName(berserker2.name);
				heracles.setNp(berserker2.np);
				heracles.setGender(berserker2.gender);
				heracles._activeSkill.push_back("Honor of the Battered");
				heracles._activeSkill.push_back("Unyielding Will");
				heracles._activeSkill.push_back("Triumphant Return of the Sword");
				heracles._activeSkill.shrink_to_fit();
				heracles._passiveSkill.push_back("Mad Enhancement");
				heracles._passiveSkill.shrink_to_fit();
				std::cout << heracles;
				for (std::vector<std::string>::iterator it = heracles._activeSkill.begin(); it < heracles._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = heracles._passiveSkill.begin(); it < heracles._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				pointer = &heracles;
				std::cout << "Dynamic Binding: " << pointer->getName() << std::endl;
				break;
			case ruler:
				std::cout << std::endl;
				jeanne.setRarity(ruler2.rarity);
				jeanne.setIllustrator(ruler2.illustrator);
				jeanne.setName(ruler2.name);
				jeanne.setNp(ruler2.np);
				jeanne.setGender(ruler2.gender);
				jeanne._activeSkill.push_back("Revelation");
				jeanne._activeSkill.push_back("True Name Discernment");
				jeanne._activeSkill.push_back("God's Resolution");
				jeanne._activeSkill.shrink_to_fit();
				jeanne._passiveSkill.push_back("Magic Resistance");
				jeanne._passiveSkill.shrink_to_fit();
				std::cout << jeanne;
				for (std::vector<std::string>::iterator it = jeanne._activeSkill.begin(); it < jeanne._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = jeanne._passiveSkill.begin(); it < jeanne._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				anotherPointer = &jeanne;
				std::cout << "Dynamic Binding: " << anotherPointer->getName() << std::endl;
				break;
			case avenger:
				std::cout << std::endl;
				alter.setRarity(avenger2.rarity);
				alter.setIllustrator(avenger2.illustrator);
				alter.setName(avenger2.name);
				alter.setNp(avenger2.np);
				alter.setGender(avenger2.gender);
				alter._activeSkill.push_back("Tawrich: Left Fang Grinder");
				alter._activeSkill.push_back("Zarich: Right Fang Grinder");
				alter._activeSkill.push_back("Murderous Intent");
				alter._activeSkill.shrink_to_fit();
				alter._passiveSkill.push_back("Avenger");
				alter._passiveSkill.push_back("Oblivion Correction");
				alter._passiveSkill.push_back("Self-Replenishment (Magic)");
				alter._passiveSkill.shrink_to_fit();
				std::cout << alter;
				for (std::vector<std::string>::iterator it = alter._activeSkill.begin(); it < alter._activeSkill.end(); it++)
				{
					std::cout << "Active Skill: " << *it << std::endl;
				}
				for (std::vector<std::string>::iterator it = alter._passiveSkill.begin(); it < alter._passiveSkill.end(); it++)
				{
					std::cout << "Passive Skill: " << *it << std::endl;
				}
				anotherPointer = &alter;
				std::cout << "Dynamic Binding: " << anotherPointer->getName() << std::endl;
				break;
			default:
				throw myex;
				break;
			}
			break;
		default:
			throw myex;
			break;
		}
		std::cout << std::endl << std::endl << "ESEMPI FORMALI" << std::endl;
		Saber Mordred;
		Mordred.setName("Mordred");
		pointer = &Mordred;
		std::cout << std::endl << "Kurasu Class: " << pointer->getName() << std::endl;
		Rider* RiderMordred = static_cast<Rider*>(pointer);
		std::cout << "Rider Class: " << RiderMordred->getName() << std::endl;
		Saber* NewMordred = dynamic_cast<Saber*>(RiderMordred);
		std::vector<int>(4, 1);
		std::vector <std::vector<int> > vec2D(5, std::vector<int>(4, 1));
		for (auto vec : vec2D)
		{
			for (auto x : vec)
				std::cout << x << " , ";
			std::cout << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		system("PAUSE");
		return 0;
	}
	system("PAUSE");
	return 0;
}
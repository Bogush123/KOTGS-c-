// KnightFile.h
#include <iostream>

using namespace std;

class KnightStats
{
    private:
        string knightsName = "";
        string knightsProfession = "";
        string Attacks[4] = { "", "", "", "" };
        int wisdom = 0;
        int strength = 0;
        int magStrength = 0;
        int defense = 0;
        int health = 0;
        int level = 0;
        int gold = 0;

    public:
        KnightStats(string knightsName, string knightsProfession, string Attacks[], int wisdom, int strength, int magStrength, int defense, int health, int level, int gold)
        {
            this->knightsName = knightsName;
            this->knightsProfession = knightsProfession;
            this->Attacks = Attacks;
            this->wisdom = wisdom;
            this->strength = strength;
            this->magStrength = magStrength;
            this->defense = defense;
            this->health = health;
            this->level = level;
            this->gold = gold;
        }

    //Get Set Functions

        string getKnightsName()
        {
            return knightsName;
        }

        void setKnightsName(string knightsName)
        {
            this->knightsName = knightsName;
        }

        string getknightsProfession()
        {
            return knightsProfession;
        }

        void setknightsProfession(string knightsProfession)
        {
            this->knightsProfession = knightsProfession;
        }

        string getAttacks()
        {
            return Attacks;
        }

        void setAttacks(string Attacks)
        {
            this->Attacks = Attacks;
        }

        int getWisdom()
        {
            return wisdom;
        }

        void setWisdom(int wisdom)
        {
            this->wisdom = wisdom;
        }

        int getStrength()
        {
            return strength;
        }

        void setStrength(int strength)
        {
            this->strength = strength;
        }

        int getmagStrength()
        {
            return magStrength;
        }

        void setmagStrength(int magStrength)
        {
            this->magStrength = magStrength;
        }

        int getDefense()
        {
            return defense;
        }

        void setDefense(int defense)
        {
            this->defense = defense;
        }

        int getHealth()
        {
            return health;
        }
        void setHealth(int health)
        {
            this->health = health;
        }

        int getLevel()
        {
            return level;
        }

        void setLevel(int level)
        {
            this->level = level;
        }

        int getGold()
        {
            return gold;
        }

        void setGold(int gold)
        {
            this->gold = gold;
        }

        void DisplayKnight()
        {
            cout << "\n---------------------------------";
            cout << "\nName: " << knightsName;
            cout << "\nClass: " << knightsProfession;
            cout << "\nAttacks: " << Attacks;
            cout << "\nWisdom: " << wisdom;
            cout << "\nStrength: " << strength;
            cout << "\nMagic Strength: " << magStrength;
            cout << "\nDefense: " << defense;
            cout << "\nHealth: " << health;
            cout << "\nLevel: " << level;
            cout << "\nGold: " << gold;
            cout << "\n---------------------------------";

        }
};


class MakeAKnight
{
    void KnightMaker()
    {

        string knightsName = "";
        string knightsProfession = "";
        int KnightIndex;
        string Attacks[4] = { "", "", "", "" };
        int wisdom = 0;
        int strength = 0;
        int magStrength = 0;
        int defense = 0;
        int health = 0;
        int level = 0;
        int gold = 0;

        cout << "Hello...  I guess I do not know your name\n";

        cout << "Could you tell me your name? ";
        cin >> knightsName;

        cout << "\nWell hello " << knightsName << "I am glad you could join us!\n ";
        cout << "\nI don't know how much you remember, but could you recall what your class was?";
        cout << "\nwhere you a Druid[0], Patina[1], or a Paragon[2]? ";
        cin >> KnightIndex;

        if (KnightIndex <= 0)
        {
            knightsProfession = "Druid";
            Attacks[4] = { "Vine Whip", "Morph", "Poison Gas", "Fruitful Heal" };
            wisdom = 10;
            strength = 10;
            magStrength = 20;
            defense = 10;
            health = 50;
            level = 5;
            gold = 10;
        }
        else if (KnightIndex == 1)
        {
            knightsProfession = "Patina";
            Attacks[4] = { "Mighty Thrash", "Enraged", "Earthquake", "Vigoress Drink" };
            wisdom = 10;
            strength = 20;
            magStrength = 10;
            defense = 15;
            health = 60;
            level = 5;
            gold = 10;
        }
        else if (KnightIndex >= 2)
        {
            knightsProfession = "Paragon";
            Attacks[4] = { "Spear Thrust", "Divine Intervention", "Unbreakable Will", "Prayer" };
            wisdom = 20;
            strength = 10;
            magStrength = 10;
            defense = 5;
            health = 70;
            level = 5;
            gold = 10;
        }

        KnightStats myKnight = KnightStats( knightsName, knightsProfession, Attacks, wisdom, strength, magStrength, defense, health, level, gold);

        myKnight.DisplayKnight();

    }
};

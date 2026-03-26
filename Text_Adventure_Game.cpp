#include <iostream>
#include <string>

using namespace std ;

class Player {
public:
    string name;
    class Attribute {
    public:
        
        int health;
        int strength;
        int mana;

        Attribute(int health, int strength, int mana); // : health(h), strength(s), mana(m) {}
    };
    class Warrior {
    public:
        Attribute stats;

        Warrior(string n) :  stats (25,10,2) {};

        void Intro() {
            cout << "Welcome Warrior, You are strong enough to move mountains: " << stats.strength << " str " << " Durable enough to shield meteor " << stats.health << endl;
        }

    };
    class Mage {
    public:
        Attribute stats;
        Mage(string n) : stats(20, 5, 10) {};

        void Intro() {
            cout << "Welcome Warrior, You have power enough to nuke a village: " << stats.mana << " mana" << " but little vulnerable " << stats.health << " vigor" << endl;
        }

    };
};
void playerChoice()
   { 
    int choice;
    cin >> choice;
    if (choice == 1) { // dot is used for object wehreas :: is used for class
        Player::Mage myMage("Gandalf"); // rathr than assigning the name, ask from user

        myMage.Intro(); // created an instance named my mage to hold the information of object Mage and then called Intro function
    }
    else if (choice == 2) {
        Player::Warrior myWarrior("Niggasaurous");

        myWarrior.Intro();
    }
}

int main()
{
    
    cout << " Welcome to the World of No lights " << endl;
    cout << " Please choose your 'character type'" << endl;
    cout << " Do you want to be 'Mage(1)' or 'Warrior(2)' " << endl; 
    playerChoice();

    return 0;

}

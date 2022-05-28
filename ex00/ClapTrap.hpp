#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
public:

    ClapTrap( void );
    ClapTrap( std::string newName);
    ~ClapTrap( void );
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getHp( void );
    int getEnergy( void );
    int getAd( void );
    void setName( std::string newName );
    std::string getName( void );


private:

    std::string _name;
    int _hp;
    int _energy;
    int _ad;

};

#endif

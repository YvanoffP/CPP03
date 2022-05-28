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
    void setHp( int hp );
    int getEnergy( void );
    void setEnergy( int energy );
    int getAd( void );
    void setAd( int ad );
    void setName( std::string newName );
    std::string getName( void );


private:

    std::string _name;
    int _hp;
    int _energy;
    int _ad;

};

#endif

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
    std::string getName( void );
	std::string getType( void );
	int getMaxHp( void );

    void setHp( int hp );
    void setEnergy( int energy );
    void setAd( int ad );
    void setName( std::string newName );
	void setType( std::string type );
	void setMaxHp( int maxHp );



protected:

    std::string _name;
    int _hp;
    int _energy;
    int _ad;
	std::string _type;
	int _maxHp;

};

#endif

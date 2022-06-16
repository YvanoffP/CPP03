#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
public:

    ClapTrap( void );
    ClapTrap( std::string newName);
	ClapTrap( const ClapTrap & copy );
    virtual ~ClapTrap( void );

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHp( void ) const;
    int getEnergy( void ) const;
    int getAd( void ) const;
    std::string getName( void ) const;
	std::string getType( void ) const;
	int getMaxHp( void ) const;

	ClapTrap &operator=( const ClapTrap &rhs );

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

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

public:
    DiamondTrap( void );
    DiamondTrap( const std::string name );
    DiamondTrap( const DiamondTrap &copy );
    virtual ~DiamondTrap( void );

    void attack( const std::string &target );

    void whoAmI( void );

private:
    std::string _name;
};

#endif

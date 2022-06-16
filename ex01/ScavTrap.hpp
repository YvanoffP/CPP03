#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public :
    ScavTrap( void );
    ScavTrap( const std::string name );
    ScavTrap( const ScavTrap &copy );
    virtual ~ScavTrap( void );

	ScavTrap &operator=( const ScavTrap &rhs );

    void attack( const std::string &target );
    void guardGate( void );
};

#endif

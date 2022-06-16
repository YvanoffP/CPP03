#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{

    FragTrap frag("Yves");

	frag.highFivesGuys();
    frag.attack("Le respect");
	frag.beRepaired(13);
    frag.attack("Le respect");
    frag.attack("Le respect");
    frag.attack("Le respect");
    frag.attack("Le respect");
    frag.attack("Le respect");
    frag.attack("Le respect");
	frag.takeDamage(10);
	frag.takeDamage(10);
	frag.takeDamage(10);
	frag.beRepaired(13);
	frag.beRepaired(13);
	frag.beRepaired(13);
	frag.beRepaired(13);



/*	ClapTrap clap("Guit");
	ScavTrap scav("Yvanoff");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.takeDamage(9);
	clap.beRepaired(15);
	clap.takeDamage(12);
	clap.beRepaired(40);
	clap.takeDamage(1);
	clap.takeDamage(12);
	clap.takeDamage(1);
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");
	clap.beRepaired(15);
	clap.attack("RandomGuy");
	clap.attack("RandomGuy");

	std::cout << "--------------------------" << std::endl;

	scav.guardGate();
	scav.attack("Mama");
	scav.attack("Mama");
	scav.takeDamage(10);
	scav.beRepaired(20);
	scav.takeDamage(150);
	scav.takeDamage(80);
	scav.attack("Mama");
	scav.attack("Mama");
	scav.beRepaired(20);
	scav.attack("Mama");
	scav.attack("Mama");
	scav.attack("Mama");
	scav.attack("Mama");
*/
	return (0);
}

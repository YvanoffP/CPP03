#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{

	/*ClapTrap clap("Guit");
	ScavTrap scav("Aspi");
	FragTrap frag("Jordam");*/
	DiamondTrap diamond("Papa");

	diamond.whoAmI();
	std::cout << diamond.getAd() << std::endl;
	std::cout << diamond.getEnergy() << std::endl;
	std::cout << diamond.getHp() << std::endl;
    diamond.guardGate();
    diamond.highFivesGuys();

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

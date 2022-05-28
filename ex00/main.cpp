#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap test("Guit");

    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.takeDamage(3);
    test.beRepaired(4);
    test.takeDamage(100);
    test.takeDamage(3);
    test.beRepaired(4);
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    test.attack("Yvanoff");
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:45:29 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 17:57:18 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\x1b[35m" << "Creating ClapTrap and ScavTrap objects" << "\x1b[0m" << std::endl;
    ClapTrap clap("Clappy");
    ScavTrap Scav("Scavvy");

    std::cout << "\x1b[35m" << "Testing ClapTrap attack" << "\x1b[0m" << std::endl;
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\x1b[35m" << "Testing ScavTrap attack and guard gate mode" << "\x1b[0m" << std::endl;
    Scav.attack("Target2");
    Scav.guardGate();

    std::cout << "\x1b[35m" << "Testing ClapTrap depletion scenarios" << "\x1b[0m" << std::endl;
    clap.takeDamage(20); // Should potentially "defeat" Clappy
    clap.beRepaired(10); // Attempt repair after defeat should fail

    std::cout << "\x1b[35m" << "Testing ScavTrap energy depletion" << "\x1b[0m" << std::endl;
    for (int i = 0; i < 15; i++) { // Exceeds energy points to test limits
        Scav.attack("Target3");
    }
    Scav.beRepaired(5); // Attempt to repair without energy points

    std::cout << "\x1b[35m" << "Cloning ScavTrap using copy constructor" << "\x1b[0m" << std::endl;
    ScavTrap ScavClone(Scav);
    ScavClone.attack("CloneTarget");

    std::cout << "\x1b[35m" << "Assigning ClapTrap using copy assignment operator" << "\x1b[0m" << std::endl;
    ClapTrap clapOther = clap;
    clapOther.attack("AnotherTarget");

    std::cout << "\x1b[35m" << "Cleanup actions" << "\x1b[0m" << std::endl;
    // Output destructors' actions

    return 0;
}

// int main(void)
// {
// 	ClapTrap claptrap("Clappy");
// 	std::cout << "_______________________________\n" << std::endl;
// 	ScavTrap Scavtrap("Scavvy");
// 	std::cout << "_______________________________\n" << std::endl;
// 	claptrap.attack("Enemy1");
// 	claptrap.takeDamage(3);
// 	claptrap.beRepaired(1);
// 	Scavtrap.attack("Enemy2");
// 	Scavtrap.guardGate();
// 	Scavtrap.takeDamage(13);
// 	Scavtrap.beRepaired(7);
// 	std::cout << "_______________________________\n" << std::endl;
// 	Scavtrap.attack("Enemy3");
// 	std::cout << "_______________________________\n" << std::endl;
// 	Scavtrap.takeDamage(100);
// 	std::cout << "_______________________________\n" << std::endl;
// 	Scavtrap.guardGate();
// 	std::cout << "_______________________________\n" << std::endl;

// 	return 0;
// }
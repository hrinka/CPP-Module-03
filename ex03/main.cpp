/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:05:53 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 18:41:20 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Crappy");
	std::cout << "____________________________\n" << std::endl;
	ScavTrap Scavtrap("Scavvy");
	std::cout << "____________________________\n" << std::endl;
	FragTrap fragtrap("Fraggy");
	std::cout << "____________________________\n" << std::endl;
	DiamondTrap diamondtrap("Diamond");
	std::cout << "____________________________\n" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(11);
	fragtrap.highFivesGuys();
	diamondtrap.whoAmI();
	diamondtrap.takeDamage(20);
    diamondtrap.beRepaired(10);
	diamondtrap.attack("Enemy2");
    diamondtrap.takeDamage(30);
    diamondtrap.beRepaired(15);
	diamondtrap.takeDamage(100);
	std::cout << "____________________________\n" << std::endl;
	diamondtrap.whoAmI();
	std::cout << "____________________________\n" << std::endl;

	return 0;
}

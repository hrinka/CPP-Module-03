/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:05:53 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 17:57:18 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("karim");
	std::cout << "_____________________\n" << std::endl;
	ScavTrap Scavtrap("Scavtrap");
	std::cout << "_____________________\n" << std::endl;
	FragTrap fragtrap("fragtrap");
	std::cout << "_____________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	std::cout << "_____________________\n" << std::endl;
	claptrap.attack("Enemy2");
	claptrap.takeDamage(13);
	claptrap.beRepaired(9);
	std::cout << "_____________________\n" << std::endl;
	Scavtrap.attack("Enemy3");
	Scavtrap.takeDamage(14);
	Scavtrap.guardGate();
	std::cout << "_____________________\n" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(9);
	fragtrap.highFivesGuys();
	std::cout << "_____________________\n" << std::endl;

	return 0;
}

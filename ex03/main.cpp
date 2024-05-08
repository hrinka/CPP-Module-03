/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:05:53 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 18:35:20 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap claptrap("karim");
	std::cout << "____________________________\n" << std::endl;
	ScavTrap scavtrap("scavtrap");
	std::cout << "____________________________\n" << std::endl;
	FragTrap fragtrap("fragtrap");
	std::cout << "____________________________\n" << std::endl;
	DiamondTrap diamoundtap("diamond");
	std::cout << "____________________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(6);
	claptrap.beRepaired(5);
    std::cout << "____________________________\n" << std::endl;
	claptrap.attack("Enemy2");
	claptrap.takeDamage(15);
	claptrap.beRepaired(9);
	std::cout << "____________________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	scavtrap.takeDamage(14);
	scavtrap.guardGate();
	std::cout << "____________________________\n" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(11);
	fragtrap.highFivesGuys();
	std::cout << "____________________________\n" << std::endl;
	diamoundtap.whoAmI();
	std::cout << "____________________________\n" << std::endl;

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:45:29 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/06 00:59:33 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap claptrap("Rinka");
	std::cout << "_______________________________\n" << std::endl;
	ScavTrap scavtrap("simo");
	std::cout << "_______________________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	claptrap.attack("Enemy2");
	claptrap.takeDamage(13);
	claptrap.beRepaired(7);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.takeDamage(12);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.guardGate();
	std::cout << "_______________________________\n" << std::endl;

	return 0;
}
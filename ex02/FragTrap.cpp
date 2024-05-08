/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:50 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 18:07:49 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "This is the constructer FragTrap" << std::endl;
}

FragTrap::FragTrap()
{
	this->name = "fragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "This is the default constructer FragTrap" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.name)
{
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "This is the copy constructer FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap&  copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "This is the copy asginemnt operator FragTrap" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "This is the destructer FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a high five." << std::endl;
}

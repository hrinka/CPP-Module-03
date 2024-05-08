/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:47:01 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/04 19:48:29 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = name;
	std::cout << "i am from scavTrap consturcter\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "i am from scavTrap descructer\n";
};

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = "scavtrap";
	std::cout << "default constructer scavtrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy.name)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "copy constructer ScavTrap" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "The assignment operator = scavtrap" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now is grate keeper" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hitPoints > 0 && this->energyPoints > 0)
		{
			this->energyPoints--;
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing ";
			std::cout << this->attackDamage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->name << " can not attack because he dosen't have hit point or energy points\n";
}

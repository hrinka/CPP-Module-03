/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:47:01 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 18:01:26 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = name;
	std::cout << "i am from \x1b[32mScavTrap\x1b[0m consturcter\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "i am from \x1b[32mScavTrap\x1b[0m descructer\n";
};

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = "Scavtrap";
	std::cout << "default constructer \x1b[32mScavTrap\x1b[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy.name)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "copy constructer \x1b[32mScavTrap\x1b[0m" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "The assignment operator = \x1b[32mScavTrap\x1b[0m" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "\x1b[32mScavTrap\x1b[0m " << this->name << " is now is grate keeper" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hitPoints > 0 && this->energyPoints > 0)
		{
			this->energyPoints--;
			std::cout << "\x1b[32mScavTrap\x1b[0m " << this->name << " attacks " << target << ", causing ";
			std::cout << this->attackDamage << " points of damage!" << std::endl;
		}
		else
			std::cout << "\x1b[32mScavTrap\x1b[0m " << this->name << " can not attack because he dosen't have hit point or energyPoints\n";
}

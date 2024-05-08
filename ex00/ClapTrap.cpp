/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:16:42 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/04 20:31:04 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "call contructer param clapTrap" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "call contructer clapTrap" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "call destructer clapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "call copy constructer" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "call copy asignment operator claptrup" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing ";
		std::cout << this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " can not attack because he dosen't have hit point or energy points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		this->hitPoints    -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " ponts of damage ";
		std::cout << "my hitpoint " << this->hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is defeated" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " is reapaird for " << amount << " points. my hitpoint ";
		std::cout << this->hitPoints << " and my energyPoints is " << this->energyPoints << std::endl;
	}
}

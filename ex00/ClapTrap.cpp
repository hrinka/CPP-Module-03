/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:16:42 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 18:03:57 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Call contructer param \x1b[34mClapTrap\x1b[0m" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Call contructer \x1b[34mClapTrap\x1b[0m" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Call destructer \x1b[34mClapTrap\x1b[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "Call copy constructer" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "call copy asignment operator \x1b[34mClapTrap\x1b[0m" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " attacks " << target << ", causing ";
		std::cout << this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " can not attack because he dosen't have hit point or energyPoints.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (amount >= this->hitPoints)
		{
			this->hitPoints = 0;
			std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " takes " << amount << " points of damage and is now defeated.\n";
		}
		else
			this->hitPoints -= amount;
		std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " takes " << amount << " points of damage. Remaining hitpoints: " << this->hitPoints << "." <<std::endl;
	}
	else
	{
		std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " is defeated." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " is reapaird for " << amount << " points. my hitPoints ";
		std::cout << this->hitPoints << " and my energyPoints is " << this->energyPoints << "." << std::endl;
	}
	else
	{
		if (this->hitPoints <= 0)
			std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " cannot be repaired because it is defeated.\n";
		else
			std::cout << "\x1b[34mClapTrap\x1b[0m " << this->name << " cannot be repaired due to insufficient energyPoints.\n";
	}
}

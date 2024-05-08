/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:04:07 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 20:21:38 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "i am form claptrap param constructer" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "claptrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "default constructer claptrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "i am form claptrap destructer" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "copy constructer claptrap" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "The assignment operator = claptrap" << std::endl;
	return *this;
}

void  ClapTrap::attack(const std::string& target)
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
		if (this->hitPoints > amount)
			this->hitPoints -= amount;
		else
			this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage. My hitpoint " << this->hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already defeated" << std::endl;
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

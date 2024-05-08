/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:33:28 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 19:55:48 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is the constructer param DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "This is the deconstructer DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap()
{
    this->name = "dimon";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is default constructer DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy.name + "_clap_name"), ScavTrap(copy.name), FragTrap(copy.name)
{
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy constructer diamontrap" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy asignment operator diamontrap" << std::endl;
    return *this;
}
void    DiamondTrap::whoAmI()
{
    std::cout << "call whoAmI from diamondTrap" << std::endl;
    std::cout << "DiamonTrap " << this->name << std::endl;
    std::cout << "ClapTrap" << ClapTrap::name << std::endl;
}

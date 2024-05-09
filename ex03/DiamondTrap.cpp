/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:33:28 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 18:09:57 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is the constructer param \x1b[31mDiamondTrap\x1b[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "This is the deconstructer \x1b[31mDiamondTrap\x1b[0m" << std::endl;
}
DiamondTrap::DiamondTrap()
{
    this->name = "dimon";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is default constructer \x1b[31mDiamondTrap\x1b[0m" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy.name + "_clap_name"), ScavTrap(copy.name), FragTrap(copy.name)
{
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy constructer \x1b[31mDiamondTrap\x1b[0m" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy asignment operator \x1b[31mDiamondTrap\x1b[0m" << std::endl;
    return *this;
}
void    DiamondTrap::whoAmI()
{
    std::cout << "call whoAmI from \x1b[31mDiamondTrap\x1b[0m" << std::endl;
    std::cout << "\x1b[31mDiamondTrap\x1b[0m " << this->name << std::endl;
    std::cout << "\x1b[34mClapTrap\x1b[0m " << ClapTrap::name << std::endl;
}

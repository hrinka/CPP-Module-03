/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:04:53 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 19:54:58 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
#define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap&   operator=(const ScavTrap&  copy);
		void guardGate();
		void attack(const std::string& target);
};

#endif

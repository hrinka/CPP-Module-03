/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:33:50 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 18:34:02 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMON_TRAP
#define DIAMON_TRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(const DiamondTrap &copy);
        void    whoAmI();
};

#endif

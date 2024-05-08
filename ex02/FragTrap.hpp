/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:07:25 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/08 18:07:47 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	void highFivesGuys(void);
};

#endif

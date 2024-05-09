/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:40:18 by hrinka            #+#    #+#             */
/*   Updated: 2024/05/09 17:08:43 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("Me");
	ClapTrap	b("Friend");

	a.attack("Enemy1");
	a.takeDamage(10);
	a.beRepaired(5);
	b.beRepaired(3);
	b.takeDamage(10);
	b.attack("Enemy2");
	b.takeDamage(10);
	b.takeDamage(10);
	a.beRepaired(3);

	return (0);
}

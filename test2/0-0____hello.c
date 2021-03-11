/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0____hello.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eherlind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 02:11:01 by eherlind          #+#    #+#             */
/*   Updated: 2021/03/03 05:32:50 by eherlind         ###   ########.fr       */  
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** 


Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите программу, которая отображает «Hello World!» сопровождаемую новой строкой.


Пример:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>


   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:38:29 by cgodecke          #+#    #+#             */
/*   Updated: 2024/01/06 15:24:18 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_v;

public:
	// Constructors
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	// Member functions
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
	void 	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	

	// Exceptions
	class FullContainerException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class NotEnoughNumbersException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif

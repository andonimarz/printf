# ft_printf

## Final grade 100/100
  
## Description
  Solo – about 70 hours

This project is pretty straightforward, you have to recode printf. You will learn what is and how to implement variadic functions. Once you validate it, you will reuse this function in your future projects. 

## Table of Contents

- [Installation](#installation)
- [Mandatory](#Mandatory)

## Installation

Clone this repository using the following command.

      git clone https://github.com/andonimarz/printf.git

## Mandatory

You have to recode the printf() function from libc.

The prototype of ft_printf() is:

      int ft_printf(const char *, ...);

- Requirements

      •Don’t implement the buffer management of the original printf().
      •Your function has to handle the following conversions: cspdiuxX%
      •Your function will be compared against the original printf().
      •You must use the command ar to create your library.
      Using the libtool command is forbidden.
      •Your libftprintf.a has to be created at the root of your repository.
  
- Conversions:

      •%c Prints a single character.
      •%s Prints a string (as defined by the common C convention).
      •%p The void * pointer argument has to be printed in hexadecimal format.
      •%d Prints a decimal (base 10) number.
      •%i Prints an integer in base 10.
      •%u Prints an unsigned decimal (base 10) number.
      •%x Prints a number in hexadecimal (base 16) lowercase format.
      •%X Prints a number in hexadecimal (base 16) uppercase format.
      •%% Prints a percent sign.

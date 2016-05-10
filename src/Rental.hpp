/*
  Rental.hpp

  Include file for Rental class
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Movie.hpp"

class Rental {
public:

    // constructor
    Rental(const Movie& movie, int days_rented);

    // days rented
    int getDaysRented() const;

    // movie rented
    const Movie& getMovie() const;

private:
    Movie movie;
    int days;
};

#endif

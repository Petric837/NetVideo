/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"
#include "Movie.hpp"

int main() {

    // Basic construction test case
    Movie movie("A", Movie::REGULAR);

    Rental rental(movie, 7);

    assert(rental.getDaysRented() == 7);
    assert(rental.getMovie() == "A");


    return 0;
}

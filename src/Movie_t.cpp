/*
  Movie_t.cpp

  Test program for class Movie
*/

#include <cassert>

#include "Movie.hpp"

int main() {

  // regular movie
  {
    Movie movie("A", Movie::REGULAR);

    assert(movie.getTitle() == "A");
    assert(movie.getCode() == Movie::REGULAR);
  }

  // new release
  {
    Movie movie("A", Movie::NEW_RELEASE);

    assert(movie.getTitle() == "A");
    assert(movie.getCode() == Movie::NEW_RELEASE);
  }

  // childrens
  {
    Movie movie("A", Movie::CHILDRENS);

    assert(movie.getTitle() == "A");
    assert(movie.getCode() == Movie::CHILDRENS);
  }

  // longer title
  {
    Movie movie("A B", Movie::REGULAR);

    assert(movie.getTitle() == "A B");
    assert(movie.getCode() == Movie::REGULAR);
  }

  // change price
  {
    Movie movie("A", Movie::NEW_RELEASE);

    assert(movie.getTitle() == "A");
    assert(movie.getCode() == Movie::NEW_RELEASE);

    movie.setPriceCode(Movie::REGULAR);
    assert(movie.getCode() == Movie::REGULAR);
  }

  return 0;
}

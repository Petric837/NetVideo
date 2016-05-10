/*
  Movie.hpp

  Include file for Movie class
*/

#ifndef Movie_H
#define Movie_H

#include <string>

class Movie {
public:

    static const int REGULAR      = 0;
    static const int NEW_RELEASE  = 1;
    static const int CHILDRENS    = 2;

    // constructor
    Movie(const std::string& title, int price_code);

    // movie title
    const std::string& getTitle() const;

    // movie price code
    int getCode() const;

    // set movie price code
    void setPriceCode(int new_price_code);

private:
    std::string title;
    int price_code;
};

#endif

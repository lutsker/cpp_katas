#include <catch2/catch.hpp>
#include <fromroman.hpp>

TEST_CASE( "returns 1 if I", "[from_roman]") {
  REQUIRE(from_roman("I") == 1);
}

TEST_CASE( "returns 2 if II", "[from_roman]") {
  REQUIRE(from_roman("II") == 2);
}

TEST_CASE( "returns 4 if IV", "[from_roman]") {
  REQUIRE(from_roman("IV") == 4);
}

TEST_CASE( "returns 5 if V", "[from_roman]") {
  REQUIRE(from_roman("V") == 5);
}

TEST_CASE( "returns 9 if IX", "[from_roman]") {
  REQUIRE(from_roman("IX") == 9);
}

TEST_CASE( "returns 42 if XLII", "[from_roman]") {
  REQUIRE(from_roman("XLII") == 42);
}

TEST_CASE( "returns 99 if XCIX", "[from_roman]") {
  REQUIRE(from_roman("XCIX") == 99);
}

TEST_CASE( "returns 2013 if MMXIII", "[from_roman]") {
  REQUIRE(from_roman("MMXIII") == 2013);
}

TEST_CASE( "returns 2019 if MMXIX", "[from_roman]") {
  REQUIRE(from_roman("MMXIX") == 2019);
}

TEST_CASE( "returns 1983 if MCMLXXXIII", "[from_roman]") {
  REQUIRE(from_roman("MCMLXXXIII") == 1983);
}

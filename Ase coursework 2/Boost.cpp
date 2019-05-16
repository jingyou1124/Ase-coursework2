#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;


BOOST_AUTO_TEST_CASE(Addtional_Test)
{
	Rational x = Rational(1, 4);
	Rational y = Rational(1, 4);

	Rational result = Rational(1, 2);

	// Check x + y with the result
	BOOST_CHECK_EQUAL((x + y), result);
}

BOOST_AUTO_TEST_CASE(Substraction_Test)
{
	Rational x = Rational(3, 4);
	Rational y = Rational(1, 4);

	Rational result = Rational(1, 2);

	// Check x - y with the result
	BOOST_CHECK_EQUAL((x - y), result);
}


BOOST_AUTO_TEST_CASE(Multiplition_Test)
{
	Rational x = Rational(3, 4);
	Rational y = Rational(1, 4);

	Rational result = Rational(3, 16);

	// Check x * y with the result
	BOOST_CHECK_EQUAL((x * y), result);
}


BOOST_AUTO_TEST_CASE(Division_Test)
{
	Rational x = Rational(3, 4);
	Rational y = Rational(1, 4);

	Rational result = Rational(3);

	// Check x / y with the result
	BOOST_CHECK_EQUAL((x / y), result);
}

BOOST_AUTO_TEST_CASE(NegativeDivision_Test)
{
	Rational x = Rational(-3, 4);
	Rational y = Rational(2, 5);

	Rational result = Rational(-15,8);

	// Check x / y with the result
	BOOST_CHECK_EQUAL((x / y), result);
}



BOOST_AUTO_TEST_CASE(Simplify_Test)
{
	Rational fraction = Rational(2, 6);
	Rational simplify = Rational(1, 3);

	// Check the fraction with the simplify result
	BOOST_CHECK_EQUAL(fraction, simplify);
}
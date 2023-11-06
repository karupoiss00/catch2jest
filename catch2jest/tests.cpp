#include "catch2jest.hpp"
#include <catch2/catch.hpp>
#include <vector>

SCENARIO("toEqual")
{
	SECTION("numbers equality")
	{
		expect(1)->toEqual(1);
		expect(2 * 2)->toEqual(4);
		expect(3 * 2)->toEqual(2 * 3);

		expect(1)->isNot->toEqual(2);
		expect(2 * 2)->isNot->toEqual(5);
		expect(3 * 2)->isNot->toEqual(4 * 3);
	}
}
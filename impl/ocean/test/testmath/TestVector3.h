/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef META_OCEAN_TEST_TESTMATH_TEST_VECTOR_3_H
#define META_OCEAN_TEST_TESTMATH_TEST_VECTOR_3_H

#include "ocean/test/testmath/TestMath.h"

namespace Ocean
{

namespace Test
{

namespace TestMath
{

/**
 * This class implements a test for the 3D vector.
 * @ingroup testmath
 */
class OCEAN_TEST_MATH_EXPORT TestVector3
{
	public:

		/**
		 * Tests all sphere functions.
		 * @param testDuration The number of seconds for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool test(const double testDuration);

		/**
		 * Tests the messenger function.
		 * @return True, if succeeded
		 */
		static bool testWriteToMessenger();

		/**
		 * Tests the is parallel function.
		 * @param testDuration The number of second for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testIsParallel(const double testDuration);

		/**
		 * Tests the is unit function.
		 * @param testDuration The number of second for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testIsUnit(const double testDuration);

		/**
		 * Tests the angle function.
		 * @param testDuration The number of second for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testAngle(const double testDuration);

		/**
		 * Tests the perpendicular function of the vector.
		 * @param testDuration The number of seconds for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testPerpendicular(const double testDuration);

		/**
		 * Tests the lesser operator of the vector.
		 * @param testDuration The number of seconds for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testLessOperator(const double testDuration);

		/**
		 * Tests the vector conversion functions.
		 * @param testDuration The number of seconds for each test, with range (0, infinity)
		 * @return True, if succeeded
		 */
		static bool testVectorConversion(const double testDuration);
};

}

}

}

#endif // META_OCEAN_TEST_TESTMATH_TEST_VECTOR_3_H

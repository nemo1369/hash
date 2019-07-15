//---------------------------------------------------------------------------//
// Copyright (c) 2018-2019 Nil Foundation AG
// Copyright (c) 2018-2019 Mikhail Komarov <nemo@nilfoundation.org>
//
// Distributed under the Boost Software License, Version 1.0
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//---------------------------------------------------------------------------//

#define BOOST_TEST_MODULE streebog_test

#include <nil/crypto3/hash/algorithm/hash.hpp>

#include <nil/crypto3/hash/streebog.hpp>
#include <nil/crypto3/hash/hash_state.hpp>

#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include <boost/static_assert.hpp>

#include <iostream>
#include <string>
#include <unordered_map>

#include <cstdio>
#include <cstring>

using namespace nil::crypto3::hash;

typedef std::unordered_map<std::string, std::string>::value_type string_data_value_t;
BOOST_TEST_DONT_PRINT_LOG_VALUE(string_data_value_t)

BOOST_AUTO_TEST_SUITE(streebog_test_suite)

BOOST_AUTO_TEST_CASE(streebog_range_hash) {
}

BOOST_AUTO_TEST_SUITE_END()
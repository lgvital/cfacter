#include <gmock/gmock.h>
#include <facter/util/environment.hpp>
#include <unistd.h>

using namespace std;
using namespace facter::util;

TEST(facter_util_environment, get_path_separator) {
    ASSERT_EQ(':', environment::get_path_separator());
}

TEST(facter_util_environment, search_paths) {
    auto paths = environment::search_paths();
    ASSERT_GT(paths.size(), 2u);
    ASSERT_EQ("/sbin", *(paths.rbegin() + 1));
    ASSERT_EQ("/usr/sbin", *paths.rbegin());
}

TEST(facter_util_environment, search_paths_empty_path) {
    // Empty paths should not be included, as filesystem::path resolves them to cwd.
    string value;
    ASSERT_TRUE(environment::get("PATH", value));
    ASSERT_TRUE(environment::set("PATH", value+":"));
    environment::reload_search_paths();

    auto paths = environment::search_paths();
    ASSERT_EQ(0u, count(paths.begin(), paths.end(), ""));

    ASSERT_TRUE(environment::set("PATH", value));
    environment::reload_search_paths();
}

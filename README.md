# google-test-study
My personal repository for studying the Google Test framework

# install

git clone git@github.com:google/googletest.git /tmp/googletest
cmake /tmp/googletest/CMakeLists.txt
make -C /tmp/googletest
sudo mkdir /usr/lib/googletest
sudo cp /tmp/googletest/lib/* /usr/lib/googletest/

sudo ln -s /usr/lib/googletest/libgmock.a /usr/lib/libgmock.a
sudo ln -s /usr/lib/googletest/libgmock_main.a /usr/lib/libgmock_main.a
sudo ln -s /usr/lib/googletest/libgtest.a /usr/lib/libgtest.a
sudo ln -s /usr/lib/googletest/libgtest_main.a /usr/lib/libgtest_main.a

sudo cp -r /tmp/googletest/googletest/include/gtest/ /usr/local/include/
sudo cp -r /tmp/googletest/googlemock/include/gmock/ /usr/local/include

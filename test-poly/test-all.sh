echo "Compiling the tests!"
gcc ./test-all.cpp -o ./test-all.app -Wall -Wpedantic
echo "Running the tests!"
./test-all.app
echo "Cleaning up!"
rm ./test-all.app
echo "Done!"

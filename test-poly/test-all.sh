echo "Compiling the tests!"
gcc -lstdc++ ./test-all.cpp -o ./test-all.app -Wall -Wpedantic
echo "Running the tests!"
chmod +x ./test-all.app
./test-all.app
echo "Cleaning up!"
rm ./test-all.app
echo "Done!"

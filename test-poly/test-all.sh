echo "Compiling the tests!"

FLAGS="-std=c++20 -Wall -Wpedantic"

FILE1="./../polynomial-lib/polynomial.cpp"
FILE1_RESULT="./polynomial.o"
echo "Compiling $FILE1 into $FILE1_RESULT"
g++ -c $FILE1 -o $FILE1_RESULT $FLAGS
echo ""

FILE2="./test-all.cpp"
FILE2_RESULT="./test-all.o"
echo "Compiling $FILE2 into $FILE2_RESULT"
g++ -c $FILE2 -o $FILE2_RESULT $FLAGS
echo ""

RESULT="./test-all.app"
echo "Linking the test executable into $RESULT"
g++ $FILE1_RESULT $FILE2_RESULT -o $RESULT $FLAGS
echo ""

echo "Running the tests!"
chmod +x $RESULT
$RESULT
echo ""

echo "Cleaning up!"
rm $FILE1_RESULT $FILE2_RESULT $RESULT
echo "Done!"

echo "Compiling the tests!"

FLAGS="-std=c++20 -Wall -Wpedantic"

FILE1="./../polynomial-lib/polynomial.hpp"
FILE1_RESULT="./polynomial_header.o"
echo "Compiling $FILE1 into $FILE1_RESULT"
g++ -c $FILE1 -o $FILE1_RESULT $FLAGS
echo ""

FILE2="./../polynomial-lib/polynomial.cpp"
FILE2_RESULT="./polynomial.o"
echo "Compiling $FILE2 into $FILE2_RESULT"
g++ $FILE1_RESULT $FILE2 -o $FILE2_RESULT $FLAGS
echo ""

FILE3="./test-all.cpp"
FILE3_RESULT="./test-all.o"
echo "Compiling $FILE3 into $FILE3_RESULT"
g++ -c $FILE3 -o $FILE3_RESULT $FLAGS
echo ""

RESULT="./test-all.app"
echo "Linking the test executable into $RESULT"
g++ $FILE1_RESULT $FILE2_RESULT $FILE3_RESULT -o $RESULT $FLAGS -lm
echo ""

echo "Running the tests!"
chmod +x $RESULT
$RESULT
echo ""

echo "Cleaning up!"
rm $FILE1_RESULT $FILE2_RESULT $FILE3_RESULT $RESULT
echo "Done!"

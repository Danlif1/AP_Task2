# AP_Task2

**This project was built by Daniel Lifshitz and Adira Weiss.**

**In this project we find the type of a given vector using the KNN algorithm and a file of classified vectors.**

## The Files:

### CalcDist.h/cpp:
With those files we calculate all the distances from the vector for the KNN algorithm.

### KNN.h/cpp:
With those files we implement the KNN algorithm in O(n*log(n)) time and O(n) space. (n is the amount of vectors).

### Point.h/cpp:
With those files we merge both the vectors and types together and implements the getters and setters.

### PointReader.h/cpp:
With those files we read the .csv file and create all the classified points.

### SafetyChecks.h/cpp:
With those files we implement all the edge cases tests and checking for wrong input.

### main.cpp:
With that file we run the entire program and printing the type of the vector inputted.

**Run and compile**

If the only files you have in your directory are the needed files, mainly ```ex2.cpp```, ```CalcDist.cpp```, ```KNN.cpp```, ```Point.cpp```, ```PointReader.cpp``` and ```SafetyChecks.cpp``` **and their headers (.hpp)**.

You can compile the code with this command:  
```
g++ -std=c++11 *.cpp -o
```
Otherwise you need to list them:
```
g++ -std=c++11  ex2.cpp CalcDist.cpp KNN.cpp Point.cpp PointReader.cpp SafetyChecks.cpp
```

And run on linux/mac: 
```
./a.out 3 iris_classified.csv MAN
```
and on windows:
```
a.out 3 iris_classified.csv MAN
```
**Make sure that the classified file is in your working directory otherwise the program won't be able to find it.**

**Example**

If you input:
```
1 2 3 4
```
You will get:
```
Iris-versicolor
```

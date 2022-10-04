# Instructions  
Have a look at the code in main.cpp. This demontrates how to move through a 2d array one row at a time to access its values and print them out. This is a very common task, so common in data science for example that there are libraries to make this a bit easier. 

Coding this can mess with your head a bit sometimes, particularly if you are mapping _rows_ and _columns_ in a 2d array to y (vertical) and x (horizontal) coordinates in an image. The x and y seem back to front! But rows go vertically down a array as does a y cordinate in an image. In any case it is good to become familar with the coding process. 

> For each row (starting at 0), you move along each column (in this example 0 to 3) until the end of the row. Then you move to the next row, 1, and move along all of the columns again. 

If you are not sure how the program moves through the code, put a breakpoint in at the first `for` (line 15) and step through the code. This and printing out the values of varaibles etc. to check if your code is working, is one of the best ways to learn. 

>Note the use of constants for rows and columns (and how they are formatted) - as these values will not change. 

  ## Steps
  1. Run the code and check the output in the console window.
  2. Change the code so it displays the values in the 2d array as a 2d display similar to the example shown below. This can be acheived with some editing of the display text and by moving the `<< endl`.
     
```C++
I[0][0](34)   I[0][1](-1)   I[0][2](879)   I[0][3](22)   
I[1][0](24)   I[1][1](365)  I[1][2](-101)  I[1][3](-1)   
I[2][0](-20)  I[2][1](40)   I[2][2](90)    I[2][3](97) 
```